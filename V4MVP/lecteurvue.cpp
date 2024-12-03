#include "lecteurvue.h"
#include "ui_lecteurvue.h"
#include <QDebug>
#include <QMessageBox>
#include <iostream>

LecteurVue::LecteurVue(QMainWindow *parent)
    : QMainWindow(parent)
    , ui(new Ui::LecteurVue)
{
    ui->setupUi(this);
    ui->actionPantxica->setData(1);
    ui->actionThierry->setData(2);
    ui->actionYann->setData(3);
    ui->actionManu->setData(4);
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
    QObject::connect(ui->actionPantxica,SIGNAL(triggered()),c,SLOT(demanderCharger()));
    QObject::connect(ui->actionManu,SIGNAL(triggered()),c,SLOT(demanderCharger()));
    QObject::connect(ui->actionThierry,SIGNAL(triggered()),c,SLOT(demanderCharger()));
    QObject::connect(ui->actionYann,SIGNAL(triggered()),c,SLOT(demanderCharger()));
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
    QObject::disconnect(ui->actionPantxica,SIGNAL(triggered()),c,SLOT(demanderCharger()));
    QObject::disconnect(ui->actionManu,SIGNAL(triggered()),c,SLOT(demanderCharger()));
    QObject::disconnect(ui->actionThierry,SIGNAL(triggered()),c,SLOT(demanderCharger()));
    QObject::disconnect(ui->actionYann,SIGNAL(triggered()),c,SLOT(demanderCharger()));
    QObject::disconnect(ui->acAProposDe,SIGNAL(triggered()),c,SLOT(demanderInfo()));
}


void LecteurVue::majInterface(Lecteur::UnEtat e,string num,string tD,string tI,string tC,string chem)
{

    switch (e) {
    case Lecteur::suivant :
        (*this).majDiap(num,tD,tI,tC,chem);
        break;
    case Lecteur::precedent :
        (*this).majDiap(num,tD,tI,tC,chem);
        break;
    case Lecteur::automatique :
        ui->btnArret->setEnabled(true);
        ui->labMode->setText(QString::fromStdString("Mode Automatique"));
        (*this).majDiap(num,tD,tI,tC,chem);
        break;
    case Lecteur::charge :
        (*this).majDiap(num,tD,tI,tC,chem);
        ui->labMode->setText(QString::fromStdString("Mode manuel"));
        ui->btnArret->setEnabled(false);
        break;
    case Lecteur::info :
        this->afficheQMessageBox();
        break;
    case Lecteur::enlever :
        (*this).majDiap(num,tD,tI,tC,chem);
        break;
    case Lecteur::manuel :
        ui->btnArret->setEnabled(false);
        break;
    default: break;
    }
}

void LecteurVue::majDiap(string num,string tD,string tI,string tC,string chem)
{
    ui->labTitre->setText(QString::fromStdString(tI));
    ui->groupBox_2->setTitle(QString::fromStdString(tD));
    ui->labCat->setText(QString::fromStdString(tC));
    ui->labNum->setText(QString::fromStdString(num));
    QPixmap newPixmap(QString::fromStdString(chem));
    ui->labDiapo->setPixmap(newPixmap);
    ui->labDiapo->setAlignment(Qt::AlignCenter);
}


void LecteurVue::afficheQMessageBox()
{
    QMessageBox msgBox;
    msgBox.setText("24/05/2024\nVersion 3 modèle MVP\n\n Auteurs :\n Zelie Davaud - Lamina Mothar - Emile Cazalaa ");
    msgBox.setWindowTitle("INFOS");

    msgBox.setStandardButtons(QMessageBox::Ok);


    int result = msgBox.exec();
    if (result == QMessageBox::Ok) {
        msgBox.close();
    }
}


