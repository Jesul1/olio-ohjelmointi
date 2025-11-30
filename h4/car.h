#ifndef CAR_H
#define CAR_H

#include <memory>

#include "wheel.h"
#include "engine.h"

using namespace std;

class car {
private:
    string model;
    string brand;

    unique_ptr<Engine> objEngine;

    unique_ptr<Wheel> objWheelFR;
    unique_ptr<Wheel> objWheelFL;
    unique_ptr<Wheel> objWheelBR;
    unique_ptr<Wheel> objWheelBL;

public:
    car(string model, string brand);

    string getModel() const;
    void setModel(const string &newModel);

    string getBrand() const;
    void setBrand(const string &newBrand);

    void setEngine();
    void setWheels();

    void printDetails();
};

#endif // CAR_H
