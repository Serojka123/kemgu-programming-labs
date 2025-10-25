#include <iostream>


float P = 3.14159;

float squareCircle(int R){
    float square = P*pow(R,2);
    return square;
}

float lenCircle(int R){
    float len = 2*P*R;
    return len;
}


void printTable( float a, float b, float c){
    std::cout << "| " << a << " | S: " << b << " | L: " << c << " |" << std::endl;
    std::cout << "-----" <<std::endl;


}

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");

    std::cout << "n = ";
    int n = 0;
    std::cin >> n;

    std::cout << "\n-----" <<std::endl;
    for (int k = 1; k <= n; k++){
        
        printTable(k, squareCircle(k), lenCircle(k));

    }
    

}