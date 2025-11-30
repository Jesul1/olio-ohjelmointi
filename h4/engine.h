#ifndef ENGINE_H
#define ENGINE_H

class Engine {
public:
    Engine(int horsePower, double displacement);

    int getHorsePower();
    void setHorsePower(int h);

    double getDisplacement();
    void setDisplacement(double d);

private:
    int horsepower;
    double displacement;
};

#endif // ENGINE_H
