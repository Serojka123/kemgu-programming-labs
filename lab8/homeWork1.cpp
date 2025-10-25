#include <iostream>

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int x, n;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "n = ";
    std::cin >> n;

    
    double num = x;
    std::cout << "\n0: " << num <<std::endl;

    for (int k = 1; k<=n; k++){
        num *= pow(x,2)*(-2*k-1)/((k+1)*(2*k+3));
        std::cout << k << ": " << num <<std::endl;
    }

    num = x;
    std::cout << "\n0: " << num <<std::endl;
    int k = 1;
    while (k <= n){
        num *= pow(x,2)*(-2*k-1)/((k+1)*(2*k+3));
        std::cout << k << ": " << num <<std::endl;
        k++;
    }

    num = x;
    std::cout << "\n0: " << num <<std::endl;
    k = 1;
    do{
        num *= pow(x,2)*(-2*k-1)/((k+1)*(2*k+3));
        std::cout << k << ": " << num <<std::endl;
        k++;
    }
    while (k <= n);

}