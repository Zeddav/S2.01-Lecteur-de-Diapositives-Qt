#include "Database.h"
#include "qsqlquery.h"
#include <QCoreApplication>
#include <QSqlError>
#include <iostream>
using namespace std;

Database::Database()
{
}

bool Database::openDataBase()
{
    mydb = QSqlDatabase::addDatabase(CONNECT_TYPE);
    mydb.setDatabaseName(DATABASE_NAME);
    return mydb.open();
}

void Database::closeDataBase()
{
    mydb.close();
}
