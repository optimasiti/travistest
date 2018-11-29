#ifndef FOO_TEST_H
#define FOO_TEST_H

#include <QtTest/QTest>
#include <QObject>

class Foo_Test : public QObject
{
    Q_OBJECT

private slots:
    void DoSum_Ok();



};

#endif // FOO_TEST_H
