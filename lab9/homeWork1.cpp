#include <iostream>
#include <cmath>

int lenNum(int num){
    int len = 0;
    while (num>0){
        len += 1;
        num /= 10;
    }
    return len;
}

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");

    float x = 0, y = 0, z = 0;
    std::cout << "Введите 3 натуральных числа\n";
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;
    std::cout << "z = ";
    std::cin >> z;

    if ((x < 0 || fmod(x, 1.0) != 0.0 ) || 
        (y < 0 || fmod(y, 1.0) != 0.0 ) || 
        (z < 0 || fmod(z, 1.0) != 0.0 )
    ){
        std::cout << "Вы ввели не натуральные числа";
        return 0;
    }

    if ((lenNum(x) == lenNum(y)) && (lenNum(y) == lenNum(z))){
        std::cout << "Все числа имеют одинаковую длину\n";
        return 0;
    }

    if ((lenNum(x) == lenNum(y)) && (lenNum(x)  > lenNum(z))){
        std::cout << "Первое и второе числа имеют одинаковую наибольшую длину\n";
        return 0;
    }
    

    if (lenNum(x) > lenNum(y)){
        if (lenNum(x) == lenNum(z)){
            std::cout << "Первое и третье числа имеют одинаковую наибольшую длину\n";
            return 0;
        } 
        else if (lenNum(x) > lenNum (z)){
            std::cout << "Первое число имеет больше всего цифр\n";
        }
        else{
            std::cout << "Третье число имеет больше всего цифр\n";
        }
    }
    else{
        if (lenNum(y) == lenNum(z)){
            std::cout << "Второе и третье числа имеют одинаковую наибольшую длину\n";
            return 0;
        } 
        else if (lenNum(y) > lenNum(z)){
            
            std::cout << "Второе число имеет больше всего цифр\n";
        }
        else{
            std::cout << "Третье число имеет больше всего цифр\n";
        }
    }

}