#include "diaporama.h"
#include "qsqlquery.h"

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

    db->openDataBase();
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

        QSqlQuery query;
        query.exec("SELECT D.titreDiaporama,D.vitesseDefilement,DDD.idDiapo,DDD.rang FROM Diaporamas D JOIN DiaposDansDiaporama DDD ON D.idDiaporama=DDD.idDiaporama WHERE D.idDiaporama=1;");
        query.first();
        (*this).setTitre(query.value(0).toString().toStdString());
        (*this).setVitesseDefilement(query.value(1).toInt());
        imageACharger= new ImageDansDiapo(query.value(2).toInt(),query.value(3).toInt());
        ajouterImageEnFin(imageACharger);
        while(query.next())
        {
            imageACharger= new ImageDansDiapo(query.value(2).toInt(),query.value(3).toInt());
            ajouterImageEnFin(imageACharger);
        }
        break ;}

    case 2 :{ // diaporama de Thierry

        QSqlQuery query;
        query.exec("SELECT D.titreDiaporama,D.vitesseDefilement,DDD.idDiapo,DDD.rang FROM Diaporamas D JOIN DiaposDansDiaporama DDD ON D.idDiaporama=DDD.idDiaporama WHERE D.idDiaporama=2;");
        query.first();
        (*this).setTitre(query.value(0).toString().toStdString());
        (*this).setVitesseDefilement(query.value(1).toInt());
        imageACharger= new ImageDansDiapo(query.value(2).toInt(),query.value(3).toInt());
        ajouterImageEnFin(imageACharger);
        while(query.next())
        {
            imageACharger= new ImageDansDiapo(query.value(2).toInt(),query.value(3).toInt());
            ajouterImageEnFin(imageACharger);
        }
        break ;}

    case 3 :{ // diaporama de Yann

        QSqlQuery query;
        query.exec("SELECT D.titreDiaporama,D.vitesseDefilement,DDD.idDiapo,DDD.rang FROM Diaporamas D JOIN DiaposDansDiaporama DDD ON D.idDiaporama=DDD.idDiaporama WHERE D.idDiaporama=3;");
        query.first();
        (*this).setTitre(query.value(0).toString().toStdString());
        (*this).setVitesseDefilement(query.value(1).toInt());
        imageACharger= new ImageDansDiapo(query.value(2).toInt(),query.value(3).toInt());
        ajouterImageEnFin(imageACharger);
        while(query.next())
        {
            imageACharger= new ImageDansDiapo(query.value(2).toInt(),query.value(3).toInt());
            ajouterImageEnFin(imageACharger);
        }
        break ;}

    case 4 :{ // diaporama de Manu

        QSqlQuery query;
        query.exec("SELECT D.titreDiaporama,D.vitesseDefilement,DDD.idDiapo,DDD.rang FROM Diaporamas D JOIN DiaposDansDiaporama DDD ON D.idDiaporama=DDD.idDiaporama WHERE D.idDiaporama=4;");
        query.first();
        (*this).setTitre(query.value(0).toString().toStdString());
        (*this).setVitesseDefilement(query.value(1).toInt());
        imageACharger= new ImageDansDiapo(query.value(2).toInt(),query.value(3).toInt());
        ajouterImageEnFin(imageACharger);
        while(query.next())
        {
            imageACharger= new ImageDansDiapo(query.value(2).toInt(),query.value(3).toInt());
            ajouterImageEnFin(imageACharger);
        }
     break;}
    }

    trierParRangCroissant();  // selon le rang de l'image dans le diaporama

    // post-condition : nbImages() >= 0
    db->closeDataBase();
}


void  Diaporama::chargerIm(Images& pImages) {
    db = new Database();
    db->openDataBase();
    QSqlQuery query;
    query.exec("SELECT D.titrePhoto,F.nomfamille,D.uriPhoto FROM Diapos D JOIN Familles F ON F.idFamille=D.idFam ORDER BY D.idPhoto");
    for(int i = 0; query.next(); i++){
        Image* imageACharger = new Image ();
        imageACharger->creerImage(query.value(1).toString().toStdString(), query.value(0).toString().toStdString(),":/diapo"+ query.value(2).toString().toStdString());
        pImages.push_back(imageACharger);}
    db->closeDataBase();
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

