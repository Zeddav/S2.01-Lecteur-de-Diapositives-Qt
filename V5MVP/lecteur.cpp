#include "lecteur.h"
#include "diaporama.h"
#include "imagedansdiapo.h"
#include "image.h"
#include <QDebug>


Lecteur::Lecteur():_etat(vide), diaporama(nullptr)
{
}

Lecteur::~Lecteur()
{
    if (getDiaporama() != nullptr)
    {
        viderLecteur();
        delete diaporama;
    }
}



unsigned int Lecteur::nbImages() const
{
    if (lecteurVide())
    {
        throw string ("lecteur vide");
    }
    return diaporama->nbImages();
}

bool Lecteur::avancer()
{
    if (!lecteurVide())
    {
        if (getRangImageCourante() == nbImages()-1)
        {
            if (this->getEtat()==automatique){
                return false;
            }
            else{
                setRangImageCourante(0);
                return true;}
        }
        else {
            setRangImageCourante(getRangImageCourante() + 1);
            return true;
        }
    }
}

void Lecteur::reculer()
{
    if (!lecteurVide())
    {
        if (getRangImageCourante() == 0)
        {
            setRangImageCourante(nbImages()- 1);
        }
        else {
            setRangImageCourante(getRangImageCourante() - 1);
        }
    }
}

void Lecteur::setEtat(UnEtat etat)
{
    (*this)._etat=etat;
}


Lecteur::UnEtat Lecteur::getEtat() const
{
    return (*this)._etat;
}

unsigned int Lecteur::getIdDiaporama() const
{
    return idDiaporama; // valeur >= 0
}

unsigned int Lecteur::getRangImageCourante() const
{
    if (lecteurVide() ||
        (!lecteurVide() && nbImages() == 0 ))
    {
        throw string ("pas d'image courante : lecteur vide ou diaporama vide");
    }
    return RangImageCourante;
}

string Lecteur::getImageCourante() const
{
    if (lecteurVide() ||
        (!lecteurVide() && nbImages() == 0 ))
    {
        return nullptr;
    }
    ImageDansDiapo* imD;
    imD= diaporama->_localisationImages.at(getRangImageCourante());
    return diaporama->getIm().at(imD->getPos())->getTitreIm();

}

string Lecteur::getCatImageCourante() const
{
    if (lecteurVide() ||
        (!lecteurVide() && nbImages() == 0 ))
    {
        return nullptr;
    }
    ImageDansDiapo* imD;
    imD= diaporama->_localisationImages.at(getRangImageCourante());
    return diaporama->getIm().at(imD->getPos())->getCategorie();

}

string Lecteur::getChemImageCourante() const
{
    if (lecteurVide() ||
        (!lecteurVide() && nbImages() == 0 ))
    {
        return nullptr;
    }
    ImageDansDiapo* imD;
    imD= diaporama->_localisationImages.at(getRangImageCourante());
    return diaporama->getIm().at(imD->getPos())->getChemin();

}

int Lecteur::getVitesseDiap() const
{
    return this->diaporama->getVitesse();
}


bool Lecteur::lecteurVide() const
{
    return (getDiaporama() == nullptr);
}

Diaporama* Lecteur::getDiaporama() const
{
    return diaporama;   // peut être nullptr
}



void Lecteur::setDiaporama(Diaporama* pDiaporama)
{
    diaporama = pDiaporama;
}

void Lecteur::setRangImageCourante(unsigned int pRImageCourante)
{
    RangImageCourante= pRImageCourante;
}

void Lecteur::setIdDiaporama(unsigned int pIdDiaporama)
{
    idDiaporama = pIdDiaporama;
    diaporama->setId(pIdDiaporama);
}




void Lecteur::chargerDiaporamaCourant()
{
    /* Chargement des images associées au diaporama courant */
    diaporama->charger();
    if (nbImages() != 0)
    { setRangImageCourante(0) ;}
}


void Lecteur::changerDiaporama(unsigned int pId)
{
    /* Chargement des informations et images images associées au diaporama courant
       Dans une version ultérieure, le seul paramètre sera le numéro ou identifiant du diaporama choisi,
       les autres informations proviendront de la Base de Données */


        if (!lecteurVide())
        {
            diaporama->vider();
        }
        else
        {
            diaporama = new Diaporama();
        }
        setIdDiaporama(pId);
        diaporama->setId(pId);
        chargerDiaporamaCourant(); // charge les images et la position de l'image courante

}


void Lecteur::afficherImageCouranteDansDiaporamaCourant (const Diaporama& pDiaporama, unsigned int pImageCourante,  Image* pImage)
{

    cout << endl << endl;
    cout << "DIAPORAMA : " << pDiaporama.getTitre() << endl << endl;
    cout << pDiaporama._localisationImages[pImageCourante]->getRang() << " sur " <<  pDiaporama.nbImages() << " / ";
    pImage->afficher();


}



string Lecteur::getTitreD()
{
    return diaporama->getTitre();
}

int Lecteur::getVitesseD()
{
    return diaporama->getVitesse();
}

void Lecteur::setVitesseD(int vitesse){
    diaporama->setVitesseDefilement(vitesse);
}

string Lecteur::getNum()
{
    return  (std::to_string(diaporama->_localisationImages[RangImageCourante]->getRang())+" sur "+(std::to_string(diaporama->nbImages())));

}



void Lecteur::viderLecteur()
{
    // supprime les images du diaporama,  et réinitialise les attributs du lecteur
    if (!lecteurVide())
    {
        diaporama->vider();
        setDiaporama(nullptr);
        setIdDiaporama(0);
    }
}


