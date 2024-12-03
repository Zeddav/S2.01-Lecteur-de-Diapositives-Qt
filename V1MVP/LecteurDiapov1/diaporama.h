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

public:
    vector <ImageDansDiapo> _localisationImages; // images du diaporama
    Diaporama();
    ~Diaporama();
    string getTitre() const;
    int getVitesse() const;
    void setVitesseDefilement(int vitesse);
    void setTitre(string titre);
    unsigned int nbImages() const; //renvoie le nombre d'images du diaporama

};



typedef vector<Diaporama> Diaporamas;

#endif // DIAPORAMA_H



