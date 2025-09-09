#include <iostream>

int main(){
    int abc;
    int a, b, c;
    int bac;
    std::cin >> abc;
    // 123
    a = abc / 100; // 1
    c = abc % 10; // 3
    abc = abc % 100;
    b = abc / 10; // 2

    bac = b*100 + a*10 + c;

    std::cout << bac << std::endl;
}
