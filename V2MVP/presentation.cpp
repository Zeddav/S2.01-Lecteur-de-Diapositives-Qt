#include "presentation.h"
#include "lecteurvue.h"
#include "lecteur.h"
#include <QDebug>
#include <QCoreApplication>

Presentation::Presentation(QObject *parent)
    : QObject{parent}
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
    _laVue->majInterface(_leModele->getEtat());
}

void Presentation::demanderPrecedent()
{
    _leModele->setEtat(Lecteur::precedent);
    _laVue->majInterface(_leModele->getEtat());
}

void Presentation::demanderLancer()
{
    _leModele->setEtat(Lecteur::automatique);
    _laVue->majInterface(_leModele->getEtat());
}

void Presentation::demanderArret()
{
    _leModele->setEtat(Lecteur::manuel);
    _laVue->majInterface(_leModele->getEtat());
}


void Presentation::demanderCharger()
{
    _leModele->setEtat(Lecteur::charge);
    _laVue->majInterface(_leModele->getEtat());
}


void Presentation::demanderEnlever()
{
    _leModele->setEtat(Lecteur::enlever);
    _laVue->majInterface(_leModele->getEtat());

}

void Presentation::demanderInfo()
{
    _leModele->setEtat(Lecteur::info);
    _laVue->majInterface(_leModele->getEtat());
}

