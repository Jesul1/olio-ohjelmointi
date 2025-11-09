#ifndef ANIMAL_H
#define ANIMAL_H

class Animal
{
public:
    Animal();
    ~Animal();

    virtual void callOut();
};

class Dog: public Animal{

public:
    Dog();
    ~Dog();

    void callOut() override;
};

#endif // ANIMAL_H
