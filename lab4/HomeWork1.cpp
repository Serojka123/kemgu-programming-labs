#include <iostream>
#include <cmath>

int main(){

    setlocale(LC_ALL, "ru_RU.UTF-8");

    float a,b,c,res;
    std::cout << "Введите а: ";
    std::cin >> a;
    std::cout << "Введите b: ";
    std::cin >> b;
    std::cout << "Введите c: ";
    std::cin >> c;
    std::cout << "Введите res: ";
    std::cin >> res;

    std::cout << "Получившееся квадратное уравнение: ";
    std::cout << a << "x^2 " << (b >= 0 ? "+ " : "") << b << "x ";
    std::cout << (c >= 0 ? "+ " : "") << c << " = " << res << std::endl;

    if (a == 0 && b != 0 ){
        std::cout << "This equation has one real root: x = " << (res-c)/b << std::endl;
        return 0;
    }

    if (a == 0 && b == 0){
        if (c == res){
            std::cout << "This equation has an infinite number of roots." << std::endl;
        }
        else{
            std::cout << "Error: incorrect equation!" << std::endl;
        }
        return 0;
    }

    float D,x1,x2;

    D = pow(b,2) - 4*a*c;
    std::cout << "D = " << D << std::endl;
    if (D < 0){
        std::cout << "D<0, this equation has no real roots." << std::endl;
        return 0;
    } 
    if (D == 0){
        x1 = -b/2*a;
        std::cout << "This equation has one real root: x = " << x1 << std::endl;
        return 0;
    } 
    else{
        x1 = (-b+sqrt(D))/2*a;
        x2 = (-b-sqrt(D))/2*a;
        std::cout << "This equation has two real roots:x_1 = " << x1 << "x_2=" << x2 << std::endl;
    }
}