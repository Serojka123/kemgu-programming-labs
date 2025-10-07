#include <iostream>

int main(){
    int n = 0;
    std::cout << "n = ";
    std::cin >> n;

    int x = 0;
    std::cout << "x = ";
    std::cin >> x; 

    double sum = 0;
    for (int k = 2; n >= k; k++){

        sum += pow(-1,k)*pow(x-3, k)/k;

        
    }
    std::cout << sum << std::endl;
}