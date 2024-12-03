#ifndef LECTEUR_H
#define LECTEUR_H
#include <iostream>
#include "Diaporama.h"
using namespace std;

class Lecteur
{

public:
    enum UnEtat {vide,manuel,automatique,suivant,precedent,charge,info,enlever};

private:
    UnEtat _etat;
    Diaporama* diaporama;
    unsigned int RangImageCourante;
    unsigned int idDiaporama;

public:
    Lecteur();
    ~Lecteur();


    bool avancer(); // incrémente pPosImageCourante, modulo nbImages(pDiaporama)
    void reculer(); // décrémente pPosImageCourante, modulo nbImages(pDiaporama)

    void setEtat(UnEtat etat);
    UnEtat getEtat() const;
    unsigned int getIdDiaporama() const;
    Diaporama* getDiaporama() const;
    unsigned int getRangImageCourante() const;
    string getImageCourante() const;
    string getCatImageCourante() const;
    string getChemImageCourante() const;
    int getVitesseDiap() const;
    unsigned int nbImages() const;
    bool lecteurVide() const;
    void setDiaporama (Diaporama* pDiaporama);
    void setRangImageCourante(unsigned int pRImageCourante);
    void setIdDiaporama(unsigned int pIdDiaporama);

    void changerDiaporama(unsigned int pId);
    /* Permet de choisir un diaporama, 0 si aucun souhaité.
         * 2 formes d'appels :
         * - 1 appel signifiant la demande de chargement d'1 diaporama : utiliser les 3 paramètres, avec pId !=0
         * - 1 appel signifiant la demande de 'vidage' du lecteur : utiliser un seul paramètre : changerDiaporama(0);
          Sera remplacée par la méthode :
               void changerDiaporama(unsigned int pId);
          lorsque les données du diaporama d'identifiant pId proviendront de la Base de données */

    void afficherImageCouranteDansDiaporamaCourant (const Diaporama& pDiaporama, unsigned int pImageCourante, Image* pImage);
    /* Affichage à l'acran des infos de l'image courante dans son diaporama
     *    - titre du diaporama
          - image courante : titre, famille, contenu
          - rang de l'image courante dans le diaporama / nbre total d'images du diaporama */
    string getTitreD();
    string getNum();

    void viderLecteur();


private:
    void chargerDiaporamaCourant();
};

#endif // LECTEUR_H




