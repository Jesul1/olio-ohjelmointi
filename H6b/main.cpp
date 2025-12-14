#include <QCoreApplication>
#include "exampleclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExampleClass test;
    test.startToWait();

    //return a.exec();
}
