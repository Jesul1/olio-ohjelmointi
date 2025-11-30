#include "engine.h"
#include <iostream>

using namespace std;

Engine::Engine(int h, double d) {
    horsepower = h;
    displacement = d;
}

void Engine::setDisplacement(double d) {
    displacement = d;
}

void Engine::setHorsePower(int h){
    horsepower = h;
}

int Engine::getHorsePower(){
    return horsepower;
}

double Engine::getDisplacement(){
    return displacement;
}
