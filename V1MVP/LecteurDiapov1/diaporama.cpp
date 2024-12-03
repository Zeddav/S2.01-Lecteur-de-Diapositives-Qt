#include "diaporama.h"

Diaporama::Diaporama(): _titre("Diaporama par défaut"),_vitesseDefilement(1)
{
}


Diaporama::~Diaporama()
{
}

string Diaporama::getTitre()const
{
    return (*this)._titre;
}

int Diaporama::getVitesse() const
{
    return (*this)._vitesseDefilement;
}

void Diaporama::setVitesseDefilement(int vitesse)
{
    (*this)._vitesseDefilement=vitesse;
}

void Diaporama::setTitre(string titre)
{
    (*this)._titre=titre;
}

unsigned int Diaporama::nbImages()const
{
    return (*this)._localisationImages.size();
}
