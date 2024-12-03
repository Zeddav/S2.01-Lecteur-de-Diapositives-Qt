#ifndef IMAGEDANSDIAPO_H
#define IMAGEDANSDIAPO_H
#include <iostream>
#include "image.h"
using namespace std;

class ImageDansDiapo
{
private:
   int _pos; //rang de l'image dans le tableau d'images (vector<Images>)
             // = ordre de chargement initial des images dans la table des images
    unsigned int _rang;  // rang de l'image dans le diaporama
                        // = ordre d'affichage choisi par l'utilisateur lors de la création du diaporama
public:
   ImageDansDiapo();
   ~ImageDansDiapo();
   int getPos()const;
   int getRang()const;
   void setPos(int position);
   void setRang(int rang);

};
#endif // IMAGEDANSDIAPO_H

