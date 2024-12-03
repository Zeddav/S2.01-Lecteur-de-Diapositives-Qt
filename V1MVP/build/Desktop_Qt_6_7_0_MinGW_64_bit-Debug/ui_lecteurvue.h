/********************************************************************************
** Form generated from reading UI file 'lecteurvue.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURVUE_H
#define UI_LECTEURVUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LecteurVue
{
public:
    QAction *acEnlever;
    QAction *acQuitter;
    QAction *acAProposDe;
    QAction *actionPantxica;
    QAction *actionYann;
    QAction *actionThierry;
    QAction *actionManu;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labTitre;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *labCat;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_5;
    QLabel *labDiapo;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QLabel *labNum;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_6;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnLancer;
    QPushButton *btnArret;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnPrecedent;
    QPushButton *btnSuivant;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *labMode;
    QMenuBar *menubar;
    QMenu *menuParam_tres;
    QMenu *menuCharger;
    QMenu *menuFichier;
    QMenu *menuAide;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LecteurVue)
    {
        if (LecteurVue->objectName().isEmpty())
            LecteurVue->setObjectName("LecteurVue");
        LecteurVue->resize(804, 605);
        QFont font;
        font.setPointSize(15);
        LecteurVue->setFont(font);
        acEnlever = new QAction(LecteurVue);
        acEnlever->setObjectName("acEnlever");
        acQuitter = new QAction(LecteurVue);
        acQuitter->setObjectName("acQuitter");
        acAProposDe = new QAction(LecteurVue);
        acAProposDe->setObjectName("acAProposDe");
        actionPantxica = new QAction(LecteurVue);
        actionPantxica->setObjectName("actionPantxica");
        actionPantxica->setCheckable(true);
        actionYann = new QAction(LecteurVue);
        actionYann->setObjectName("actionYann");
        actionThierry = new QAction(LecteurVue);
        actionThierry->setObjectName("actionThierry");
        actionManu = new QAction(LecteurVue);
        actionManu->setObjectName("actionManu");
        actionManu->setCheckable(true);
        centralwidget = new QWidget(LecteurVue);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_4 = new QSpacerItem(50, 20, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        labTitre = new QLabel(groupBox_2);
        labTitre->setObjectName("labTitre");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labTitre->sizePolicy().hasHeightForWidth());
        labTitre->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(20);
        labTitre->setFont(font1);
        labTitre->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labTitre);

        horizontalSpacer_5 = new QSpacerItem(50, 20, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_6 = new QSpacerItem(50, 20, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        labCat = new QLabel(groupBox_2);
        labCat->setObjectName("labCat");
        sizePolicy.setHeightForWidth(labCat->sizePolicy().hasHeightForWidth());
        labCat->setSizePolicy(sizePolicy);
        labCat->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labCat);

        horizontalSpacer_7 = new QSpacerItem(50, 20, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_5 = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_5);

        labDiapo = new QLabel(groupBox_2);
        labDiapo->setObjectName("labDiapo");
        labDiapo->setLineWidth(1);
        labDiapo->setTextFormat(Qt::RichText);
        labDiapo->setScaledContents(false);

        verticalLayout->addWidget(labDiapo);

        verticalSpacer_4 = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer_9 = new QSpacerItem(78, 20, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        labNum = new QLabel(groupBox_2);
        labNum->setObjectName("labNum");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labNum->sizePolicy().hasHeightForWidth());
        labNum->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setKerning(false);
        font2.setStyleStrategy(QFont::PreferDefault);
        labNum->setFont(font2);
        labNum->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(labNum);

        horizontalSpacer_10 = new QSpacerItem(78, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        verticalLayout->addItem(verticalSpacer_6);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setEnabled(true);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMinimumSize(QSize(600, 90));
        horizontalLayout_8 = new QHBoxLayout(groupBox);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_3 = new QSpacerItem(1, 10, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnLancer = new QPushButton(groupBox);
        btnLancer->setObjectName("btnLancer");
        sizePolicy.setHeightForWidth(btnLancer->sizePolicy().hasHeightForWidth());
        btnLancer->setSizePolicy(sizePolicy);
        btnLancer->setMinimumSize(QSize(130, 30));
        btnLancer->setMaximumSize(QSize(130, 30));
        QFont font3;
        font3.setPointSize(11);
        btnLancer->setFont(font3);

        horizontalLayout->addWidget(btnLancer);

        btnArret = new QPushButton(groupBox);
        btnArret->setObjectName("btnArret");
        btnArret->setEnabled(false);
        sizePolicy.setHeightForWidth(btnArret->sizePolicy().hasHeightForWidth());
        btnArret->setSizePolicy(sizePolicy);
        btnArret->setMinimumSize(QSize(130, 25));
        btnArret->setMaximumSize(QSize(130, 30));
        btnArret->setFont(font3);
        btnArret->setCheckable(false);
        btnArret->setAutoDefault(false);
        btnArret->setFlat(false);

        horizontalLayout->addWidget(btnArret);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnPrecedent = new QPushButton(groupBox);
        btnPrecedent->setObjectName("btnPrecedent");
        btnPrecedent->setMinimumSize(QSize(130, 30));
        btnPrecedent->setMaximumSize(QSize(130, 30));
        btnPrecedent->setFont(font3);

        horizontalLayout->addWidget(btnPrecedent);

        btnSuivant = new QPushButton(groupBox);
        btnSuivant->setObjectName("btnSuivant");
        btnSuivant->setMinimumSize(QSize(130, 30));
        btnSuivant->setMaximumSize(QSize(130, 30));
        btnSuivant->setFont(font3);

        horizontalLayout->addWidget(btnSuivant);


        horizontalLayout_8->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(81, 10, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer_3 = new QSpacerItem(20, 200, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        verticalLayout_2->addItem(verticalSpacer_3);

        labMode = new QLabel(centralwidget);
        labMode->setObjectName("labMode");
        sizePolicy.setHeightForWidth(labMode->sizePolicy().hasHeightForWidth());
        labMode->setSizePolicy(sizePolicy);
        labMode->setMinimumSize(QSize(100, 20));
        labMode->setMaximumSize(QSize(100, 25));
        labMode->setFont(font3);
        labMode->setTextFormat(Qt::PlainText);

        verticalLayout_2->addWidget(labMode);

        LecteurVue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LecteurVue);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 804, 33));
        menuParam_tres = new QMenu(menubar);
        menuParam_tres->setObjectName("menuParam_tres");
        menuCharger = new QMenu(menuParam_tres);
        menuCharger->setObjectName("menuCharger");
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName("menuFichier");
        menuAide = new QMenu(menubar);
        menuAide->setObjectName("menuAide");
        LecteurVue->setMenuBar(menubar);
        statusbar = new QStatusBar(LecteurVue);
        statusbar->setObjectName("statusbar");
        LecteurVue->setStatusBar(statusbar);
        QWidget::setTabOrder(btnLancer, btnArret);

        menubar->addAction(menuParam_tres->menuAction());
        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuAide->menuAction());
        menuParam_tres->addAction(menuCharger->menuAction());
        menuParam_tres->addAction(acEnlever);
        menuCharger->addAction(actionPantxica);
        menuCharger->addAction(actionYann);
        menuCharger->addAction(actionThierry);
        menuCharger->addAction(actionManu);
        menuFichier->addAction(acQuitter);
        menuAide->addAction(acAProposDe);

        retranslateUi(LecteurVue);

        btnLancer->setDefault(true);
        btnArret->setDefault(true);


        QMetaObject::connectSlotsByName(LecteurVue);
    } // setupUi

    void retranslateUi(QMainWindow *LecteurVue)
    {
        LecteurVue->setWindowTitle(QCoreApplication::translate("LecteurVue", "LecteurVue", nullptr));
        acEnlever->setText(QCoreApplication::translate("LecteurVue", "Enlever diaporama", nullptr));
        acQuitter->setText(QCoreApplication::translate("LecteurVue", "Quitter", nullptr));
        acAProposDe->setText(QCoreApplication::translate("LecteurVue", "A propos de...", nullptr));
        actionPantxica->setText(QCoreApplication::translate("LecteurVue", "Pantxica", nullptr));
        actionYann->setText(QCoreApplication::translate("LecteurVue", "Yann", nullptr));
        actionThierry->setText(QCoreApplication::translate("LecteurVue", "Thierry", nullptr));
        actionManu->setText(QCoreApplication::translate("LecteurVue", "Manu", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("LecteurVue", "Titre Diaporama", nullptr));
        labTitre->setText(QCoreApplication::translate("LecteurVue", "Titre", nullptr));
        labCat->setText(QCoreApplication::translate("LecteurVue", "Cat\303\251gorie", nullptr));
        labDiapo->setText(QCoreApplication::translate("LecteurVue", "<html><head/><body><p align=\"center\"><img src=\":/diapo/images/Disney_0.gif\"/></p></body></html>", nullptr));
        labNum->setText(QCoreApplication::translate("LecteurVue", "1/1", nullptr));
        groupBox->setTitle(QString());
        btnLancer->setText(QCoreApplication::translate("LecteurVue", "&Lancer diaporama", nullptr));
        btnArret->setText(QCoreApplication::translate("LecteurVue", "&Arr\303\252ter diaporama", nullptr));
        btnPrecedent->setText(QCoreApplication::translate("LecteurVue", "&Pr\303\251c\303\251dent", nullptr));
        btnSuivant->setText(QCoreApplication::translate("LecteurVue", "&Suivant", nullptr));
        labMode->setText(QCoreApplication::translate("LecteurVue", "Mode manuel", nullptr));
        menuParam_tres->setTitle(QCoreApplication::translate("LecteurVue", "Param\303\250tres", nullptr));
        menuCharger->setTitle(QCoreApplication::translate("LecteurVue", "Charger diaporama", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("LecteurVue", "Fichier", nullptr));
        menuAide->setTitle(QCoreApplication::translate("LecteurVue", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LecteurVue: public Ui_LecteurVue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURVUE_H
