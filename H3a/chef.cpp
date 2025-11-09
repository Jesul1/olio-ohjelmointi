#include "chef.h"
#include <iostream>
using namespace std;


Chef::Chef(string n) {
    name = n;
    cout << "Chef " << name << " konstruktori" << endl;
}

Chef::~Chef() {
    cout << "Chef " << name << " destruktori" << endl;
}

void Chef::makeSalad() {
    cout << "Chef " << name << " makes salad" << endl;
}

void Chef::makeSoup() {
    cout << "Chef " << name << " makes soup" << endl;
}


ItalianChef::ItalianChef(string n) : Chef(n) {
    cout << "ItalianChef " << name << " konstruktori" << endl;
}

ItalianChef::~ItalianChef() {
    cout << "ItalianChef " << name << " destruktori" << endl;
}

void ItalianChef::makePasta() {
    cout << "ItalianChef " << name << " makes pasta" << endl;
}

string ItalianChef::getName() {
    return name;
}

