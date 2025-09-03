#include <iostream>

int main(){
    int a;
    int firsta;

    std::cin >> a;

    firsta = a;
    a = a*a*a; //a^3
    a = a*a; //a^6
    a = a*firsta;
    
    std::cout << firsta << " в 7 степени = " << a << std::endl;
}