#include "sousProgrammes.h"
#include <iostream>
#include "diaporama.h"
using namespace std;




/* Corps des sous-programmes utilisés par la fonction main()
 * ------------------------------------------------------- */

void triCroissantRang (Diaporama &pDiaporama)
{   // par la méthode du triBulle
    unsigned int taille = pDiaporama._localisationImages.size();
    ImageDansDiapo imageDansDiapo;
    for (unsigned int ici = taille-1; ici >=1 ; ici--)
    {
        // faire monter la bulle ici = déplacer l'élément de rang le plus grand en position ici
        // par échanges successifs
        for (unsigned int i = 0; i < ici; i++)
        {
            if (pDiaporama._localisationImages[i].getRang() > pDiaporama._localisationImages[i+1].getRang())
            {
                // echanger les 2 éléments
                imageDansDiapo = pDiaporama._localisationImages[i];
                pDiaporama._localisationImages[i] = pDiaporama._localisationImages[i+1];
                pDiaporama._localisationImages[i+1] = imageDansDiapo;
            }
        }
    }
}

