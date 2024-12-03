#include "presentation.h"
#include "lecteurvue.h"
#include "lecteur.h"
#include <QDebug>
#include <QCoreApplication>

Presentation::Presentation(QObject *parent)
    : QObject{parent}, _leModele(),_laVue()
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
    _leModele->setEtat(Lecteur::suivant);
    _leModele->avancer();
    _laVue->majInterface(_leModele->getEtat(),_leModele->getNum(),_leModele->getTitreD(),_leModele->getImageCourante(),_leModele->getCatImageCourante(),_leModele->getChemImageCourante());
}

void Presentation::demanderPrecedent()
{
    _leModele->setEtat(Lecteur::precedent);
    _leModele->reculer();
    _laVue->majInterface(_leModele->getEtat(),_leModele->getNum(),_leModele->getTitreD(),_leModele->getImageCourante(),_leModele->getCatImageCourante(),_leModele->getChemImageCourante());
}

void Presentation::demanderLancer()
{
    _leModele->setEtat(Lecteur::automatique);
    _laVue->majInterface(_leModele->getEtat(),_leModele->getNum(),_leModele->getTitreD(),_leModele->getImageCourante(),_leModele->getCatImageCourante(),_leModele->getChemImageCourante());
}

void Presentation::demanderArret()
{
    _leModele->setEtat(Lecteur::manuel);
    _laVue->majInterface(_leModele->getEtat(),_leModele->getNum(),_leModele->getTitreD(),_leModele->getImageCourante(),_leModele->getCatImageCourante(),_leModele->getChemImageCourante());
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
    _laVue->majInterface(_leModele->getEtat(),_leModele->getNum(),_leModele->getTitreD(),_leModele->getImageCourante(),_leModele->getCatImageCourante(),_leModele->getChemImageCourante());
}

