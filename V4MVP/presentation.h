#ifndef PRESENTATION_H
#define PRESENTATION_H

#include <QObject>
#include "lecteur.h"
#include <QTimer>

class LecteurVue;
class Presentation : public QObject
{ Q_OBJECT
public:
    explicit Presentation(QObject *parent = nullptr);

public: // pour gérer les attributs privés
    Lecteur* getModele();
    LecteurVue* getVue();
    void setModele(Lecteur *m);
    void setVue(LecteurVue *v);

public slots: // déclenchés par la vue

    void demanderSuivant();
    void demanderPrecedent();
    void demanderLancer();
    void demanderArret();
    void demanderCharger();
    void demanderEnlever();
    void demanderInfo();


private:
    bool arret;
    Lecteur *_leModele; // pointeur sur le modèle
    LecteurVue *_laVue; // pointeur sur la vue
};

#endif // PRESENTATION_H
