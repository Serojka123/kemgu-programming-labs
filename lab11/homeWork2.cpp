#include <iostream>

int factorial(int x){
    int factorial = 1;
    for (int i = 1; i <= x; i++){
        factorial *= i;
    }
    return factorial;
}

int factSum(int m, int n){
    int sum = 0, currentFact = 0;

    if (m%2 == 0){ m += 1; }

    for (int i = m; i <= n; i+=2){
            // std::cout << factorial(i)<< std::endl;
            sum += factorial(i);
        }


    return sum;
}

int main(){
    int m = 0, n = 0;
    std::cout << "m = ";
    std::cin >> m;
    std::cout << "n = ";
    std::cin >> n;
    std::cout << factSum(m,n) << std::endl;
}