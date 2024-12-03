#ifndef IMAGE_H
#define IMAGE_H
#include <iostream>
#include <vector>
using namespace std;

class Image
{
private:
   string _titreIm;
   string _categorie;
   string _chemin;

public:
   Image();
   ~Image();
   void creerImage(string pCategorie, string pTitre, string pChemin); // Peuplement de l'image
   string getCategorie()const;
   string getTitreIm() const;
   string getChemin() const;
   void setTitreIm(string titre);
   void setCategorie(string cat);
   void setChemin(string chem);
   void afficher();

};


typedef vector<Image*>Images;  // vector de pointeurs
#endif // IMAGE_H
