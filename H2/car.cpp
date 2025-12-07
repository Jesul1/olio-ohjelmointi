#include "Car.h"
#include <iostream>

using namespace std;

// Setterien toteutukset
void Car::setBrand(string b) {
    brand = b;
}

void Car::setModel(string m) {
    model = m;
}

void Car::setYearModel(int y) {
    yearModel = y;
}

// Tulostusmetodi
void Car::printData() const {
    cout << "Merkki: " << brand << endl;
    cout << "Malli: " << model << endl;
    cout << "Valmistusvuosi: " << yearModel << endl;
}
