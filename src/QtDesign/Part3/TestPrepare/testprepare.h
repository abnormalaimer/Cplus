//
// Created by 25149 on 2024/9/1.
//

#ifndef QTDESIGN_TESTPREPARE_H
#define QTDESIGN_TESTPREPARE_H


#include <QtSql/QSqlDatabase>

class testprepare {

};
void testprepare::testPrepare(){
    QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("c++");
    db.setPassword("123456");
    db.setDatabaseName("amarok");
    QVERIFY(db.open());

}


#endif //QTDESIGN_TESTPREPARE_H
