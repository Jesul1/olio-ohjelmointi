#include "class2a.h"
#include "classa1.h"
#include "classb.h"
#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    cout << "A:n arvo:" << a << " A:n muistipaikka: " << &a << endl;
    int* pointerA = &a;
    cout << "pointerA:n arvo:" << *pointerA << " pointerA:n muistipaikka: " << &*pointerA << endl;

    int &refA = a;
    cout << "refA:n arvo:" << refA << " refA:n muistipaikka: " << &refA << endl;

    int b = 6;


    // pointerA = &b; <- Toimii koska asetetaan uusi osoite pointerille
    // *pointerA = &b; <- Ei toimis koska * meinaa pointerA:n osoitetta joka on muotoa INT johon ei voida asettaa arvoksi B:n muisti osoitetta

    // refA = b; <- Asettaa A:n arvoksi int b:n arvon eli 6
    // &refA = &b; <- refA:n muisti osoitetta ei voida muuttaa 6:ksi tai myöskään antaa refA:lle uutta referenssiä koska c++ kieli ei salli referenssien uudelleen asettamista

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA1: "<<objA1.getBinfo()<<endl;

    // Alkuperäisen objekti B:n muokkaaminen ei tee mitään koska luokan luonnissa Luokka A1 tekee kopion annetusta b objektista

    ClassB &refB=objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA2 "<<objA2.getBinfo()<<endl;
    cout<<endl;

    // A luokkaa muokkaa nyt myös annetun B luokan dataa koska B luokka on annettu pointerina alkuperäiseen B luokkaan.

    return 0;
}
