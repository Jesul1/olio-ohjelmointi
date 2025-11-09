#include "animal.h"
#include <iostream>

using namespace std;

Animal::Animal() {

}

Animal::~Animal() {
    cout << "Elain on tuhottu" << endl;
}

void Animal::callOut(){
    cout << "Eläin ääntelee." << endl;
}

Dog::Dog() {

}

Dog::~Dog(){

}

void Dog::callOut(){
    cout << "Koira haukkuu!" << endl;
}
