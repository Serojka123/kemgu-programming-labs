#include <iostream>

float perimeterTriangle(int x1, int x2 , int x3, int y1, int y2, int y3){
    float a = 0, b = 0, c = 0;

    a = pow( pow(x2-x1 , 2) + pow(y2-y1 , 2) ,0.5);
    b = pow( pow(x3-x2 , 2) + pow(y3-y2 , 2) ,0.5);
    c = pow( pow(x3-x1 , 2) + pow(y3-y1 , 2) ,0.5);

    return a+b+c;
}

float squareTriangle(int x1, int x2 , int x3, int y1, int y2, int y3){
    float a = 0, b = 0, c = 0, square = 0, halfPerim = 0;

    a = pow( pow(x2-x1 , 2) + pow(y2-y1 , 2) ,0.5);
    b = pow( pow(x3-x2 , 2) + pow(y3-y2 , 2) ,0.5);
    c = pow( pow(x3-x1 , 2) + pow(y3-y1 , 2) ,0.5);
    halfPerim = perimeterTriangle(x1, x2 , x3, y1, y2, y3);
    square = pow(halfPerim * (halfPerim - a) * (halfPerim - b) * (halfPerim - c) , 0.5);

    return square;

}

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    int x1, x2 , x3, y1, y2, y3;
    std::cout << "x1 = ";
    std::cin >> x1;
    std::cout << "y1 = ";
    std::cin >> y1;
    std::cout << "x2 = ";
    std::cin >> x2;
    std::cout << "y2 = ";
    std::cin >> y2;
    std::cout << "x3 = ";
    std::cin >> x3;
    std::cout << "y3 = ";
    std::cin >> y3;

    std::cout << " Периметр: " << perimeterTriangle(x1, x2 , x3, y1, y2, y3) << std::endl;
    std::cout << " Площадь: "<< squareTriangle(x1, x2 , x3, y1, y2, y3) << std::endl;



}