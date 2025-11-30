#include <iostream>
#include "car.h"

using namespace std;

int main()
{
    string model = "Focus";
    string brand = "Ford";

    car ford(model, brand);

    ford.setEngine();
    ford.setWheels();

    ford.printDetails();
    return 0;
}
