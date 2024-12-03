#ifndef DIAPORAMA_H
#define DIAPORAMA_H
#include <iostream>
#include "imagedansdiapo.h"
using namespace std;

class Diaporama
{
private:
    string _titre;
    int _vitesseDefilement;
    unsigned int _id;
    Images _im;
    void trierParRangCroissant(); // trie les images du diaporama par ordre de rang croissant

public:
    vector <ImageDansDiapo*> _localisationImages; // images du diaporama
    Diaporama();
    ~Diaporama();
    Images getIm() const;
    string getTitre() const;
    int getVitesse() const;
    unsigned int getId() const;
    void setVitesseDefilement(int vitesse);
    void setTitre(string titre);
    void setId(unsigned int pId);
    unsigned int nbImages() const; //renvoie le nombre d'images du diaporama
    void vider();
    void ajouterImageEnFin(ImageDansDiapo* pImage);     // ajoute une image au diaporama (en fin de l'attribut images)
    void enleverImageEnFin();
    void charger();
    // chargement, dans l'attribut images, des images associées au diaporama courant (d'attribut id).
    void chargerIm(Images& pImages);

};



typedef vector<Diaporama> Diaporamas;

#endif // DIAPORAMA_H



