#include <iostream>

float sumFor(int n, int x){
    double sum = 0;
    for (int k = 1; n >= k; k++){
        sum += pow(-1,k)*pow(x-3, k)/k;
    }
    return sum;
}

float sumWhile(int n, int x){
    double sum = 0;
    int k = 1; 
    while (n >= k){
        sum += pow(-1,k)*pow(x-3, k)/k;
        k++;
    }
    return sum;
}

float sumDoWhile(int n, int x){
    double sum = 0;
    int k = 1; 
    do{
        sum += pow(-1,k)*pow(x-3, k)/k;
        k++;
    }
    while (n >= k);
    return sum;
}


int main(){
    int n = 0;
    std::cout << "n = ";
    std::cin >> n;

    int x = 0;
    std::cout << "x = ";
    std::cin >> x; 

    int select = 0;
    std::cout << "Выбрать способ:\n 1 - for\n 2 - while\n 3 - do while\n select = " ;
    std::cin >> select; 
    std::cout << "\n";

    switch (select){
        case 1:{
            
            std::cout << sumFor(n,x) << std::endl;
            break;
        }

        case 2:{
            std::cout << sumWhile(n,x) << std::endl;
            break;
        }

        case 3:{
            
            std::cout << sumDoWhile(n,x) << std::endl;
            break;
        }
        default:{
            std::cout << "Ошибка" << std::endl;
            break;
        }
    }
    
    
}