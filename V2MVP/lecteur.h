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

public:
    Lecteur();
    ~Lecteur();
    void charger(Diaporamas& diaporama);
    /* Chargement du tableau des diaporamas avec des diaporamas préalablement construits 'en dur'.
       Dans une version ultérieure, le diaporama courant affiché par le Lecteur de diaporamas sera chargé à partir
       d'une base de données.*/

    void charger (Images& pImages);
    /* Chargement du tableau des images avec seules les informations textuelles de quelques images.
    Dans une version ultérieure, ces informations seront stockées dans une Base de Données.*/

    void avancer(const Diaporama& pDiaporama, unsigned int& pPosImageCourante); // incrémente pPosImageCourante, modulo nbImages(pDiaporama)
    void reculer(const Diaporama& pDiaporama, unsigned int& pPosImageCourante); // décrémente pPosImageCourante, modulo nbImages(pDiaporama)

    void setEtat(UnEtat etat);
    UnEtat getEtat() const;

    void saisieVerifChoixActionSurImageCourante(char& pChoixAction);
    // Saisie du choix d'action de l'utilisateur vis-à-vis de l'image et diaporama courants

    unsigned int saisieVerifChoixDiaporama(const Diaporamas& pDiaporamas);
    // Retourne un numéro de diaporama choisi par l'utilisateur (dans la liste des diaporamas existants)

    void afficherImageCouranteDansDiaporamaCourant (const Diaporama& pDiaporama, unsigned int pImageCourante, Image* pImage);
    /* Affichage à l'acran des infos de l'image courante dans son diaporama
     *    - titre du diaporama
          - image courante : titre, famille, contenu
          - rang de l'image courante dans le diaporama / nbre total d'images du diaporama */

    void declencherAction(char pChoixAction, const Diaporamas& pDiaporamas, unsigned int& pDiaporamaCourant,
                          unsigned int& pImageCourante, const Images& pImages);
    /* Selon le pChoix fait l'utilisateur, réalise une des actions A)vancer, R)eculer, C)hoisir un autre diaporama, Q)quitter */

};

#endif // LECTEUR_H




