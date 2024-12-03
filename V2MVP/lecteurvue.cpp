#include "lecteurvue.h"
#include "ui_lecteurvue.h"
#include <QDebug>

LecteurVue::LecteurVue(QMainWindow *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);

}

LecteurVue::~LecteurVue()
{
    delete ui;
}


void LecteurVue::nvlleConnexion(QObject *c)
{
    //pour se connecter avec la presentation
    QObject::connect(ui->btnSuivant, SIGNAL(clicked()), c, SLOT(demanderSuivant()));
    QObject::connect(ui->btnPrecedent, SIGNAL(clicked()), c, SLOT(demanderPrecedent()));
    QObject::connect(ui->btnLancer, SIGNAL(clicked()), c, SLOT(demanderLancer()));
    QObject::connect(ui->btnArret, SIGNAL(clicked()), c, SLOT(demanderArret()));
    QObject::connect(ui->acQuitter,SIGNAL(triggered()),qApp,SLOT(quit()));
    QObject::connect(ui->acEnlever,SIGNAL(triggered()),c,SLOT(demanderEnlever()));
    QObject::connect(ui->acCharger,SIGNAL(triggered()),c,SLOT(demanderCharger()));
    QObject::connect(ui->acAProposDe,SIGNAL(triggered()),c,SLOT(demanderInfo()));


}
void LecteurVue::supprConnexion(QObject *c)
{
    //pour se déconnecter de c
    QObject::disconnect(ui->btnSuivant, SIGNAL(clicked()), c, SLOT(demanderSuivant()));
    QObject::disconnect(ui->btnPrecedent, SIGNAL(clicked()), c, SLOT(demanderPrecedent()));
    QObject::disconnect(ui->btnLancer, SIGNAL(clicked()), c, SLOT(demanderLancer()));
    QObject::disconnect(ui->btnArret, SIGNAL(clicked()), c, SLOT(demanderArret()));
    QObject::disconnect(ui->acQuitter,SIGNAL(triggered()),qApp,SLOT(quit()));
    QObject::disconnect(ui->acEnlever,SIGNAL(triggered()),c,SLOT(demanderEnlever()));
    QObject::disconnect(ui->acCharger,SIGNAL(triggered()),c,SLOT(demanderCharger()));
    QObject::disconnect(ui->acAProposDe,SIGNAL(triggered()),c,SLOT(demanderInfo()));
}


void LecteurVue::majInterface(Lecteur::UnEtat e)
{
    switch (e) {
    case Lecteur::suivant :
        qDebug()<<"diapositive suivante demandée"<<Qt::endl;
        break;
    case Lecteur::precedent :
        qDebug()<<"diapositive précédente demandée"<<Qt::endl;
        break;
    case Lecteur::automatique :
        qDebug()<<"demande de lancement du diaporama auto"<<Qt::endl;
        break;
    case Lecteur::charge :
        qDebug()<<"demande de chargement d'un diaporama"<<Qt::endl;
        break;
    case Lecteur::info :
        qDebug()<<"demande d'informations sur l'application"<<Qt::endl;
        break;
    case Lecteur::enlever :
        qDebug()<<"demande d'enlever un diaporama"<<Qt::endl;
        break;
    case Lecteur::manuel :
        qDebug()<<"demande d'arrêt du diaporama auto"<<Qt::endl;
        break;
    default: break;
    }
}

