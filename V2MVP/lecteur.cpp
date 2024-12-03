#include "lecteur.h"
#include "diaporama.h"
#include "imagedansdiapo.h"
#include "image.h"


Lecteur::Lecteur():_etat(vide)
{
}

Lecteur::~Lecteur()
{
}


void Lecteur::charger(Diaporamas& pDiaporamas)
{
    Image imageACharger;
    ImageDansDiapo imageDansDiapo;
    Diaporama diaporama;

    // Diaporama par défaut
    diaporama.setTitre("Diaporama par defaut");
    diaporama.setVitesseDefilement(1);

    // L'unique image du diaporama par défaut
    imageDansDiapo.setPos(0);
    imageDansDiapo.setRang(1);
    diaporama._localisationImages.push_back(imageDansDiapo);
    // ajout du diaporama dans le tableau de diaporamas
    pDiaporamas.push_back(diaporama);
    // vider la variable temporaire avant de la remplir avec le diaporama suivant
    diaporama._localisationImages.clear();

    // Diaporama de Pantxika
    diaporama.setTitre("Diaporama Pantxika");
    diaporama.setVitesseDefilement(2);

    // Les images du diaporama de Pantxika
    imageDansDiapo.setPos(4);
    imageDansDiapo.setRang(3);
    diaporama._localisationImages.push_back(imageDansDiapo);
    imageDansDiapo.setPos(1);
    imageDansDiapo.setRang(2);
    diaporama._localisationImages.push_back(imageDansDiapo);
    imageDansDiapo.setPos(2);
    imageDansDiapo.setRang(4);
    diaporama._localisationImages.push_back(imageDansDiapo);
    imageDansDiapo.setPos(3);
    imageDansDiapo.setRang(1);
    diaporama._localisationImages.push_back(imageDansDiapo);
    // ajout du diaporama dans le tableau de diaporamas
    pDiaporamas.push_back(diaporama);
    // vider la variable temporaire avant de la remplir avec le diaporama suivant
    diaporama._localisationImages.clear();

    // Diaporama de Thierry
    diaporama.setTitre("Diaporama Thierry");
    diaporama.setVitesseDefilement(4);

    // Les images du diaporama de Thierry
    imageDansDiapo.setPos(4);
    imageDansDiapo.setRang(1);
    diaporama._localisationImages.push_back(imageDansDiapo);
    imageDansDiapo.setPos(1);
    imageDansDiapo.setRang(2);
    diaporama._localisationImages.push_back(imageDansDiapo);
    imageDansDiapo.setPos(2);
    imageDansDiapo.setRang(3);
    diaporama._localisationImages.push_back(imageDansDiapo);
    imageDansDiapo.setPos(3);
    imageDansDiapo.setRang(4);
    diaporama._localisationImages.push_back(imageDansDiapo);
    // ajout du diaporama dans le tableau de diaporamas
    pDiaporamas.push_back(diaporama);
    // vider la variable temporaire avant de la remplir avec le diaporama suivant
    diaporama._localisationImages.clear();

    // Diaporama de Yann
    diaporama.setTitre("Diaporama Yann");
    diaporama.setVitesseDefilement(3);

    // Les images du diaporama de Yann
    imageDansDiapo.setPos(4);
    imageDansDiapo.setRang(2);
    diaporama._localisationImages.push_back(imageDansDiapo);
    imageDansDiapo.setPos(1);
    imageDansDiapo.setRang(1);
    diaporama._localisationImages.push_back(imageDansDiapo);
    imageDansDiapo.setPos(2);
    imageDansDiapo.setRang(4);
    diaporama._localisationImages.push_back(imageDansDiapo);
    imageDansDiapo.setPos(3);
    imageDansDiapo.setRang(3);
    diaporama._localisationImages.push_back(imageDansDiapo);
    // ajout du diaporama dans le tableau de diaporamas
    pDiaporamas.push_back(diaporama);
    // vider la variable temporaire avant de la remplir avec le diaporama suivant
    diaporama._localisationImages.clear();

    // Diaporama de Manu
    diaporama.setTitre("Diaporama Manu");
    diaporama.setVitesseDefilement(1);

    // Les images du diaporama de Yann
    imageDansDiapo.setPos(4);
    imageDansDiapo.setRang(4);
    diaporama._localisationImages.push_back(imageDansDiapo);
    imageDansDiapo.setPos(1);
    imageDansDiapo.setRang(3);
    diaporama._localisationImages.push_back(imageDansDiapo);
    imageDansDiapo.setPos(2);
    imageDansDiapo.setRang(2);
    diaporama._localisationImages.push_back(imageDansDiapo);
    imageDansDiapo.setPos(3);
    imageDansDiapo.setRang(1);
    diaporama._localisationImages.push_back(imageDansDiapo);
    // ajout du diaporama dans le tableau de diaporamas
    pDiaporamas.push_back(diaporama);
    // vider la variable temporaire avant de la remplir avec le diaporama suivant
    diaporama._localisationImages.clear();

}


void  Lecteur::charger(Images& pImages) {
    Image* imageACharger = new Image ();
    imageACharger->creerImage("objet", "", "C:\\cartesDisney\\Disney_tapis.gif");
    pImages.push_back(imageACharger);
    imageACharger = new Image ();
    imageACharger->creerImage("personnage", "Blanche Neige", "C:\\cartesDisney\\Disney_4.gif");
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


void Lecteur::avancer(const Diaporama& pDiaporama, unsigned int& pPosImageCourante)
{
    if (pPosImageCourante == pDiaporama._localisationImages.size() - 1)
    {
        pPosImageCourante = 0;
    }
    else {
        pPosImageCourante = pPosImageCourante + 1;
    }
}

void Lecteur::reculer(const Diaporama& pDiaporama, unsigned int& pPosImageCourante)
{
    if (pPosImageCourante == 0)
    {
        pPosImageCourante = pDiaporama._localisationImages.size() - 1;
    }
    else {
        pPosImageCourante = pPosImageCourante - 1;
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



void Lecteur::saisieVerifChoixActionSurImageCourante(char& pChoixAction)
{
    cout << endl << endl;
    while (true)
    {
        cout  << endl ;
        cout << "ACTIONS :" << "  A-vancer" << "  R-eculer" << "  C-hanger de diaporama " << "  Q-uitter .......  votre choix ? ";
        cin >> pChoixAction;
        pChoixAction = toupper(pChoixAction);

        if ((pChoixAction == 'A') || (pChoixAction == 'R') || (pChoixAction == 'C') || (pChoixAction == 'Q'))
        {
            break;
        }
    }
}


unsigned int Lecteur::saisieVerifChoixDiaporama(const Diaporamas& pDiaporamas)
{
    unsigned int choixSaisi;
    int choixDiaporama; // valeur retournée

    while (true)
    {
        system("cls");  // effacer l'écran
        cout << endl << endl << "CHANGEMENT DIAPORAMA : " << endl << endl;
        for (unsigned int num = 1; num < pDiaporamas.size(); num++)
        {
            cout << num << ": " << pDiaporamas[num].getTitre();
            if (num != pDiaporamas.size()-1) { cout << endl; }
        }
        cout << ".......  votre choix ? "; cin >> choixSaisi;
        choixDiaporama = choixSaisi;

        if ((choixDiaporama >= 1)&&(choixDiaporama < static_cast<unsigned int>(pDiaporamas.size())))
        {
            break;
        }
    }
    return choixDiaporama;
}


void Lecteur::afficherImageCouranteDansDiaporamaCourant (const Diaporama& pDiaporama, unsigned int pImageCourante,  Image* pImage)
{

    cout << endl << endl;
    cout << "DIAPORAMA : " << pDiaporama.getTitre() << endl << endl;
    cout << pDiaporama._localisationImages[pImageCourante].getRang() << " sur " <<  pDiaporama.nbImages() << " / ";
    pImage->afficher();
}


void Lecteur::declencherAction(char pChoixAction, const Diaporamas& pDiaporamas, unsigned int& pDiaporamaCourant,
                      unsigned int& pImageCourante, const Images& pImages)
/* Selon le pChoix fait l'utilisateur, réalise une des actions A)vancer, R)eculer, C)hoisir un autre diaporama, Q)quitter */
{
    unsigned int position;
    unsigned int choixDiaporama;
    switch (pChoixAction)
    {
        case 'A':
            (*this).avancer(pDiaporamas[pDiaporamaCourant], pImageCourante);
            position = pDiaporamas[pDiaporamaCourant]._localisationImages[pImageCourante].getPos();
            afficherImageCouranteDansDiaporamaCourant (pDiaporamas[pDiaporamaCourant], pImageCourante, pImages[position]);
            break;
        case 'R':
            (*this).reculer(pDiaporamas[pDiaporamaCourant], pImageCourante);
            position = pDiaporamas[pDiaporamaCourant]._localisationImages[pImageCourante].getPos();
            afficherImageCouranteDansDiaporamaCourant (pDiaporamas[pDiaporamaCourant], pImageCourante, pImages[position]);
            break;
        case 'C' :
            cout << "Choisissez un Diaporama " << endl;
            choixDiaporama = saisieVerifChoixDiaporama(pDiaporamas);
            // Changer de diaporama
            cout<<"Choix ok";
            pDiaporamaCourant = choixDiaporama;
            cout<<"change ok";
            pImageCourante = 0;
            break;

        default : break;
    }
}


