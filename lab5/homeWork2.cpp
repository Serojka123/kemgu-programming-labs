#include <iostream>

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int n;
    std::cout << "n = ";
    std::cin >> n;
    
    int sum = 0, k = 0;
    for (int i = 1; k != n; i++){
        // std::cout << i << std::endl;
        if (i % 2 == 0){
            k++;
            sum += i;
            std::cout << "Новое число (" << k << "): " << i << "; Текущая сумма: " << sum << std::endl;
        }
    }
}