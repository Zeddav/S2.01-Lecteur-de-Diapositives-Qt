#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>
#include "lecteur.h"

QT_BEGIN_NAMESPACE
namespace Ui { class LecteurVue; }
QT_END_NAMESPACE

class LecteurVue : public QMainWindow
{
    Q_OBJECT

public:
    LecteurVue(QMainWindow *parent = nullptr);
    ~LecteurVue();

public:
    // pour créer une connexion avec la présentation
    void nvlleConnexion(QObject *c);
    void supprConnexion(QObject *c);
    void majInterface (Lecteur::UnEtat e);


private:
    Ui::LecteurVue *ui;
};
#endif // LECTEURVUE_H





