#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>

#define DATABASE_NAME "bds2"   // nom du DSN
#define CONNECT_TYPE "QODBC" //on utilise le driver obdc

class Database {

public:
    Database();
    bool openDataBase();
    void closeDataBase();

private:
    QSqlDatabase mydb;

};


#endif // DATABASE_H
