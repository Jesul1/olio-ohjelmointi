#ifndef CHEF_H
#define CHEF_H

#include <string>
using namespace std;

class Chef {
protected:
    string name;
public:
    Chef(string n);
    ~Chef();

    void makeSalad();
    void makeSoup();
};

class ItalianChef: public Chef {
public:
    ItalianChef(string n);
    ~ItalianChef();

    void makePasta();
    string getName();
};

#endif // CHEF_H
