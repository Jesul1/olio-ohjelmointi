#include <iostream>
#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main()
{
    Car myCar;

    myCar.setBrand("Toyota");
    myCar.setModel("Corolla");
    myCar.setYearModel(2020);

    myCar.printData();

    Rectangle myRect;

    myRect.setHeight(5);
    myRect.setWidth(2);

    cout << myRect.getArea() << endl;
    cout << myRect.getCircum() << endl;

    //rectangle olio tuhoutuu automaattisesti main() funktion tultua päätökseen

    Student* student = new Student();

    student->setName("Riku Rantala");
    student->setStudentNumber(12345);
    student->setAverage(4.5);

    cout << student->getName() << endl;
    cout << student->getStudentNumber() << endl;
    cout << student->getAverage() << endl;

    // Vapautetaan olion varaama muisti
    delete student;

    return 0;
}
