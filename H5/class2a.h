#ifndef CLASS2A_H
#define CLASS2A_H

#include "classb.h"

class ClassA2
{
private:
    ClassB &refB;
public:
    ClassA2(ClassB&); //Annetaan argumenttina B-luokan olion osoite
    std::string getBinfo();
    void setBinfo(std::string);
};
#endif // CLASS2A_H
