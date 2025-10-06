#include <iostream>
#include <cmath>

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int a, startA;
    std::cout << "a = "; 
    std::cin >> a;
    startA = a;

    int sum = 0;
    for (; a>0; a /= 10){
        sum += a % 10;
        // std::cout << sum << std::endl;
    }

    std::cout << "Суммы цифр числа " << startA << ": " << sum << std::endl;

}