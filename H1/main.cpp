#include <iostream>

using namespace std;

void calcSum(int a, int b);
void calcDiv(int a, int b);

int retSum(int a, int b);
int retDiv(int a, int b);

int main()
{
    int a, b;

    std::cout<<"Anna luku 1:"<<std::endl;
    std::cin>>a;
    std::cout<<"Anna luku 2:"<<std::endl;
    std::cin>>b;

    calcSum(a, b);
    calcDiv(a, b);

    std::cout<< a << "+" <<  b << " = " << retSum(a, b) <<std::endl;
    try {
        cout << a << "/" <<  b << " = " << retDiv(a, b) << endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<< e.what()<< endl;
    }

    return 0;
}

void calcSum(int a, int b){
    std::cout << "Summa: " << a + b << std::endl;
}

void calcDiv(int a, int b){
    if (b == 0){
        std::cout << "osamaara: nolla ei voi toimia jakajana!" << std::endl;
    } else {
        std::cout << "osamaara: " << a / b << std::endl;
    }
}

int retSum(int a, int b){
    return a+b;
}

int retDiv(int a, int b){
    if (b <= 0){
        throw std::runtime_error("jakaja ei saa olla nolla!");
    } else {
        return a/b;
    }
}

