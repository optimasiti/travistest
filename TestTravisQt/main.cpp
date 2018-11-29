#include <QCoreApplication>


#include "foo_test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Foo_Test fooTest;

    QTest::qExec(&fooTest );
}
