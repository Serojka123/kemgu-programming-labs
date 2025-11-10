#include <iostream>

void exp(float a, float b){
    if (a == 2){
        std::cout << "division by 0" << std::endl;
    }
    else{
        float ans = 5.45*(a+2*b)/(2-a);
        std::cout << ans << std::endl;
    }
}

int main(){


    float a = 0.0, b = 0.0;
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;

    exp(a,b);



}