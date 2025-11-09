#include <iostream>
#include "animal.h"

using namespace std;

int main()
{
    Animal animal;
    animal.callOut();

    Dog dog;
    dog.callOut();

    cout << "Hello World!" << endl;
    return 0;
}
