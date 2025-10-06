#include <iostream>

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int n;
    std::cout << "n = ";
    std::cin >> n;

    int sum = 0, i = 0;
    do{
        i++;

        int current;
        std::cout << i << " - ";
        std::cin >> current; 
        
        if (current % 5 == 0 && current % 7 != 0){
            sum += current;
        }
        n--;
    }
    while (n > 0);

    std::cout << "Сумма чисел: " << sum << std::endl;
}