#include "diaporama.h"

Diaporama::Diaporama(): _titre("Diaporama par défaut"),_vitesseDefilement(1)
{
    (*this).chargerIm(_im);
}


Diaporama::~Diaporama()
{
}

Images Diaporama::getIm() const
{
    return _im;
}

string Diaporama::getTitre()const
{
    return (*this)._titre;
}

int Diaporama::getVitesse() const
{
    return (*this)._vitesseDefilement;
}
unsigned int Diaporama::getId() const
{
    return _id;
}

void Diaporama::setVitesseDefilement(int vitesse)
{
    (*this)._vitesseDefilement=vitesse;
}

void Diaporama::setTitre(string titre)
{
    (*this)._titre=titre;
}

void Diaporama::setId(unsigned int pId)
{
    _id = pId;
}

unsigned int Diaporama::nbImages()const
{
    return (*this)._localisationImages.size();
}

void Diaporama::ajouterImageEnFin(ImageDansDiapo* pImage)
{
    _localisationImages.push_back(pImage);

    // post-condition : nbImages() > 0
}

void Diaporama::enleverImageEnFin()
{
    if (nbImages() != 0)
    {
        _localisationImages.pop_back();
    }

    // post-condition : nbImages() >= 0
}

void Diaporama::vider()
{
    unsigned int taille = nbImages();
    for (unsigned int i = 0; i < taille ; i++)
    {
        enleverImageEnFin(); /* Removes the last element in the vector,
                              effectively reducing the container size by one.
                              AND deletes the removed element */
    }
    // post-condition : nbImages() == 0
}


void Diaporama::charger()
{
    /* Chargement des images associées au diaporama id.
       Crée un objet Image pour chaque image de ce diaporama, puis stocke son adresse dans l'attribut images.
       La collection  est ensuite triée par ordre croissant de rang des images.

       Dans la version actuelle, les images sont créées 'en dur'.
       Dans une version ultérieure, les images proviendront de la Base de Données */


    ImageDansDiapo* imageACharger;
    switch(_id) {
    case 0 :{ // diaporama par défaut
        (*this).setTitre("Diaporama par defaut");
        (*this).setVitesseDefilement(1);
        imageACharger= new ImageDansDiapo(0,1);
        ajouterImageEnFin(imageACharger);
        break ;}

    case 1 : { // diaporama de Pantxika
        (*this).setTitre("Diaporama Pantxika");
        (*this).setVitesseDefilement(2);
        imageACharger= new ImageDansDiapo(4,3);
        ajouterImageEnFin(imageACharger);
        imageACharger= new ImageDansDiapo(1,2);
        ajouterImageEnFin(imageACharger);
        imageACharger= new ImageDansDiapo(2,4);
        ajouterImageEnFin(imageACharger);
        imageACharger= new ImageDansDiapo(3,1);
        ajouterImageEnFin(imageACharger);
        break ;}

    case 2 :{ // diaporama de Thierry
        (*this).setTitre("Diaporama Thierry");
        (*this).setVitesseDefilement(4);
        imageACharger= new ImageDansDiapo(4,1);
        ajouterImageEnFin(imageACharger);
        imageACharger= new ImageDansDiapo(1,2);
        ajouterImageEnFin(imageACharger);
        imageACharger= new ImageDansDiapo(2,3);
        ajouterImageEnFin(imageACharger);
        imageACharger= new ImageDansDiapo(3,4);
        ajouterImageEnFin(imageACharger);
        break ;}

    case 3 :{ // diaporama de Yann
        (*this).setTitre("Diaporama Yann");
        (*this).setVitesseDefilement(3);
        imageACharger= new ImageDansDiapo(4,2);
        ajouterImageEnFin(imageACharger);
        imageACharger= new ImageDansDiapo(1,1);
        ajouterImageEnFin(imageACharger);
        imageACharger= new ImageDansDiapo(2,4);
        ajouterImageEnFin(imageACharger);
        imageACharger= new ImageDansDiapo(3,3);
        ajouterImageEnFin(imageACharger);
        break ;}

    case 4 :{ // diaporama de Manu
        (*this).setTitre("Diaporama Manu");
        (*this).setVitesseDefilement(1);
        imageACharger= new ImageDansDiapo(4,4);
        ajouterImageEnFin(imageACharger);
        imageACharger= new ImageDansDiapo(1,3);
        ajouterImageEnFin(imageACharger);
        imageACharger= new ImageDansDiapo(2,2);
        ajouterImageEnFin(imageACharger);
        imageACharger= new ImageDansDiapo(3,1);
        ajouterImageEnFin(imageACharger);
    default : break;}
    }

    trierParRangCroissant();  // selon le rang de l'image dans le diaporama

    // post-condition : nbImages() >= 0
}


void  Diaporama::chargerIm(Images& pImages) {
    Image* imageACharger = new Image ();
    imageACharger->creerImage("objet", "", "C:\\cartesDisney\\Disney_tapis.gif");
    pImages.push_back(imageACharger);
    imageACharger = new Image ();
    imageACharger->creerImage("personnage", "Blanche Neige", "/diapo/images/Disney_4.gif");
    pImages.push_back(imageACharger);
    imageACharger = new Image ();
    imageACharger->creerImage ("personnage", "Alice", "C:\\cartesDisney\\Disney_2.gif");
    pImages.push_back(imageACharger);
    imageACharger = new Image ();
    imageACharger->creerImage("animal", "Mickey", "C:\\cartesDisney\\Disney_19.gif");
    pImages.push_back(imageACharger);
    imageACharger = new Image ();
    imageACharger->creerImage ("personnage", "Pinnochio", "C:\\cartesDisney\\Disney_29.gif");
    pImages.push_back(imageACharger);
    imageACharger = new Image ();
    imageACharger->creerImage("objet", "chateau", "C:\\cartesDisney\\Disney_0.gif");
    pImages.push_back(imageACharger);
    imageACharger = new Image ();
    imageACharger->creerImage("personnage", "Minnie", "C:\\cartesDisney\\Disney_14.gif");
    pImages.push_back(imageACharger);
    imageACharger = new Image ();
    imageACharger->creerImage("animal", "Bambi", "C:\\cartesDisney\\Disney_3.gif");
    pImages.push_back(imageACharger);
}



void Diaporama::trierParRangCroissant()
{
    ImageDansDiapo* pteurImage;
    unsigned int taille = nbImages();
    for (unsigned int ici = taille-1; ici >=1 ; ici--)
    {
        // faire monter la bulle ici = déplacer l'élément de rang le plus grand en position ici
        // par échanges successifs
        for (unsigned int i = 0; i < ici; i++)
        {
            if (_localisationImages[i]->getRang() > _localisationImages[i+1]->getRang())
            {
                // echanger les 2 éléments
                pteurImage = _localisationImages[i];
                _localisationImages[i] = _localisationImages[i+1];
                _localisationImages[i+1] = pteurImage;
            }
        }
    }
}

