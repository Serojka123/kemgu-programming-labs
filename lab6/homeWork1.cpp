#include <iostream>

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int n;
    std::cout << "n = ";
    std::cin >> n;

    int min, minN, i = 0;

    while (i != n){
        i++;


        int current;
        std::cout << i << " - ";

        std::cin >> current; 

        if (minN > current || i == 1){
            minN = current;
            min = i;
        }
    }
    std::cout << "Минимальное: "<< minN << std::endl;
    std::cout << "Номер минимального: "<< min << std::endl;
}