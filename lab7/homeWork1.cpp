#include <iostream>

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
            double sum = 0;
            for (int k = 1; n >= k; k++){

                sum += pow(-1,k)*pow(x-3, k)/k;

                
            }
            std::cout << sum << std::endl;
            break;
        }

        case 2:{
            double sum = 0;
            int k = 1; 
            while (n >= k){
                sum += pow(-1,k)*pow(x-3, k)/k;
                k++;
                
            }
            std::cout << sum << std::endl;
            break;
        }

        case 3:{
            double sum = 0;
            int k = 1; 
            do{
                sum += pow(-1,k)*pow(x-3, k)/k;
                k++;
            }
            while (n >= k);
            std::cout << sum << std::endl;
            break;
        }
        default:{
            std::cout << "Ошибка" << std::endl;
            break;
        }
    }
    
    
}