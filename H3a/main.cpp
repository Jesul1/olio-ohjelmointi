#include <iostream>
#include "chef.h"

#include <string>
using namespace std;

int main()
{
    Chef Chef("Gordon Ramsey");
    Chef.makeSalad();
    Chef.makeSoup();
    ItalianChef ItalianChef("Luigi");
    ItalianChef.makePasta();
    cout << "name of the Italian Chef is " << ItalianChef.getName() << endl;
}
