#include <iostream>

int main(){
    int x,y;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;
    if (x > 0 && y > 0) { std::cout << "Четверть - 1" << std::endl;}
    if (x < 0 && y > 0) { std::cout << "Четверть - 2" << std::endl;}
    if (x < 0 && y < 0) { std::cout << "Четверть - 3" << std::endl;}
    if (x > 0 && y < 0) { std::cout << "Четверть - 4" << std::endl;}
    if (x == 0 || y == 0) { std::cout << "Не в четвертях" << std::endl;}
}