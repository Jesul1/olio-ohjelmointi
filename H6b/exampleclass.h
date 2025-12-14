#ifndef EXAMPLECLASS_H
#define EXAMPLECLASS_H

#include <QCoreApplication>
#include <QThread>
#include <QObject>
#include <QDebug>

using namespace  std;

class ExampleClass : public QObject {
    Q_OBJECT
public:
    ExampleClass(QObject* parent = nullptr);
    void startToWait();
signals:
    void readyToSay();
public slots:
    void sayHelloSlot();
};
#endif // EXAMPLECLASS_H
