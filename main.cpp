#include "s1_designation.h"
#include <QApplication>
#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    S1_Designation w;
    w.show();
    /*QFile stylesheet_file(":/ElegantDark.qss");
      stylesheet_file.open(QFile::ReadOnly);
      QString stylesheet = QLatin1String(stylesheet_file.readAll());
      qApp->setStyleSheet(stylesheet);*/
    /*QSqlDatabase db= QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("eventmanagementsystem");

    if(db.open()){
        cout<<"Database connected successfully"<<endl;
    }
    else {
        cout<<"database not connected"<<endl;
    }*/

    return a.exec();
}
