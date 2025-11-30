#include "car.h"

car::car(string model, string brand) {
    this->model = model;
    this->brand = brand;
}

string car::getModel() const
{
    return model;
}

void car::setModel(const string &newModel)
{
    model = newModel;
}

string car::getBrand() const
{
    return brand;
}

void car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

void car::setEngine()
{
    objEngine = make_unique<Engine>(150, 2.0);
}

void car::setWheels()
{
    objWheelFR = make_unique<Wheel>(17, "kesarengas");
    objWheelFL = make_unique<Wheel>(17, "kesarengas");
    objWheelBL = make_unique<Wheel>(17, "kesarengas");
    objWheelBR = make_unique<Wheel>(17, "kesarengas");
}

void car::printDetails()
{
    cout << "Car info:\n" << "Car: " << brand << " " << model << "\n";
    cout << "engine info:" << "HP: " << objEngine->getHorsePower() << " displacement: " << objEngine->getDisplacement() << "\n";
    cout << "FR wheel: " << objWheelFR->getSize() << " " << objWheelFR->getType() << endl;
    cout << "FL wheel: " << objWheelFL->getSize() << " " << objWheelFL->getType() << endl;
    cout << "BR wheel: " << objWheelBR->getSize() << " " << objWheelBR->getType() << endl;
    cout << "BL wheel: " << objWheelBL->getSize() << " " << objWheelBL->getType() << endl;

}
