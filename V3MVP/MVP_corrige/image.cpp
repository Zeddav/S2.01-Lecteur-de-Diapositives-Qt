
#include "image.h"

Image::Image()
{
}

Image::~Image()
{
}

void Image::creerImage(string pCategorie, string pTitre, string pChemin)
{
   setCategorie(pCategorie);
   setTitreIm(pTitre);
   setChemin(pChemin);
}

string Image::getCategorie()const
{
   return (*this)._categorie;
}

string Image::getTitreIm()const
{
   return (*this)._titreIm;
}

string Image::getChemin()const
{
   return (*this)._chemin;
}

void Image::setTitreIm(string nouvTitre)
{
   (*this)._titreIm=nouvTitre;
}

void Image::setCategorie(string nouvCat)
{
   (*this)._categorie=nouvCat;
}

void Image::setChemin(string nouvChem)
{
   (*this)._chemin=nouvChem;
}

void Image::afficher()
{
   cout << "image(titre:" << this->getTitreIm() << ", categorie:"
        << this->getCategorie() << ", chemin:"<< this->getChemin() << ")" << endl;
}
