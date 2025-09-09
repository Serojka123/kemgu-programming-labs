#include <iostream>
#include <cmath>

int main(){
    int x,y,z;
    std::cout << "Введите x:" << std::endl;
    std::cin >> x;
    std::cout << "Введите y:" << std::endl;
    std::cin >> y;
    std::cout << "Введите z:" << std::endl;
    std::cin >> z;
    int result;

    result = (x + abs(y) ) * (1 + pow(tan(z/2),2));

    std::cout << "Результат:" << result << std::endl;
}