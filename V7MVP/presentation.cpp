#include "presentation.h"
#include "lecteurvue.h"
#include "lecteur.h"
#include <QDebug>
#include <QCoreApplication>
#include <QTimer>

Presentation::Presentation(QObject *parent)
    : QObject{parent}, arret(false),_leModele(),_laVue()
{
}

Lecteur *Presentation::getModele()
{
    return _leModele;
}

LecteurVue *Presentation::getVue()
{
    return _laVue;
}


void Presentation::setModele(Lecteur *m)
{
    _leModele = m;
}
void Presentation::setVue(LecteurVue *v)
{
    _laVue = v;
}




void Presentation::demanderSuivant()
{
    if (_leModele->getEtat()==Lecteur::automatique){
        arret=true;}
    else{
        _leModele->setEtat(Lecteur::suivant);
        _leModele->avancer();
        _laVue->majInterface(_leModele->getEtat(),_leModele->getNum(),_leModele->getTitreD(),_leModele->getImageCourante(),_leModele->getCatImageCourante(),_leModele->getChemImageCourante());
    }
}

void Presentation::demanderPrecedent()
{
    if (_leModele->getEtat()==Lecteur::automatique){
        arret=true;}
    else{
        _leModele->setEtat(Lecteur::precedent);
        _leModele->reculer();
        _laVue->majInterface(_leModele->getEtat(),_leModele->getNum(),_leModele->getTitreD(),_leModele->getImageCourante(),_leModele->getCatImageCourante(),_leModele->getChemImageCourante());
    }
}

void Presentation::demanderLancer()
{
    if (_leModele->getEtat()!=Lecteur::automatique && !arret){
        _leModele->setEtat(Lecteur::automatique);
        _leModele->setRangImageCourante(0);
        _laVue->majInterface(_leModele->getEtat(),_leModele->getNum(),_leModele->getTitreD(),_leModele->getImageCourante(),_leModele->getCatImageCourante(),_leModele->getChemImageCourante());
        QTimer::singleShot(_leModele->getVitesseDiap()*1000, this, SLOT(demanderLancer()));
    }
    else{
        if (!arret && _leModele->avancer()){
            _laVue->majInterface(_leModele->getEtat(),_leModele->getNum(),_leModele->getTitreD(),_leModele->getImageCourante(),_leModele->getCatImageCourante(),_leModele->getChemImageCourante());
            QTimer::singleShot(_leModele->getVitesseDiap()*1000, this, SLOT(demanderLancer()));
        }
        else{
            _leModele->setEtat(Lecteur::charge);
            arret=false;
            _laVue->majInterface(_leModele->getEtat(),_leModele->getNum(),_leModele->getTitreD(),_leModele->getImageCourante(),_leModele->getCatImageCourante(),_leModele->getChemImageCourante());}
        }
}

void Presentation::demanderArret()
{
    _leModele->setEtat(Lecteur::manuel);
    _laVue->majInterface(_leModele->getEtat(),_leModele->getNum(),_leModele->getTitreD(),_leModele->getImageCourante(),_leModele->getCatImageCourante(),_leModele->getChemImageCourante());
    arret=true;
}


void Presentation::demanderCharger()
{
    _leModele->setEtat(Lecteur::charge);
    QAction *action = qobject_cast<QAction *>(sender());
    _leModele->changerDiaporama(action->data().toInt());
    _laVue->majInterface(_leModele->getEtat(),_leModele->getNum(),_leModele->getTitreD(),_leModele->getImageCourante(),_leModele->getCatImageCourante(),_leModele->getChemImageCourante());
}


void Presentation::demanderEnlever()
{
    _leModele->setEtat(Lecteur::enlever);
    _leModele->changerDiaporama(0);
    _laVue->majInterface(_leModele->getEtat(),_leModele->getNum(),_leModele->getTitreD(),_leModele->getImageCourante(),_leModele->getCatImageCourante(),_leModele->getChemImageCourante());

}

void Presentation::demanderInfo()
{
    _leModele->setEtat(Lecteur::info);
    _laVue->majInterface(_leModele->getEtat());
}

void Presentation::changerVitesse()
{
    _leModele->setVitesseD(_laVue->afficheQMessageBoxVitesse(_leModele->getVitesseD()));
    qDebug()<<_leModele->getVitesseD();

}
