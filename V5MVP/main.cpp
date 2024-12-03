#include "lecteurVue.h"
#include "lecteur.h"
#include "presentation.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // créer le modèle
    Lecteur *m = new Lecteur();
    // créer la présentation
    Presentation *p = new Presentation();
    // créer la vue
    LecteurVue w;
    // faire pointer la présentation vers la vue et le modèle
    p->setVue(&w);
    p->setModele(m);
    // connexion des signaux de la vue avec les slots de la présentation
    w.nvlleConnexion(p);
    p->demanderEnlever();
    // afficher la vue et démarrer la boucle d'attente des messages
    w.show();
    return a.exec();
}
