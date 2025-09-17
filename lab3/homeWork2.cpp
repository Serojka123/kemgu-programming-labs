#include <iostream>

int main(){
    float x,y,z;
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;
    std::cout << "z = ";
    std::cin >> z;
    std::cout << "Было: x = " << x << " y = " << y << " z = " << z << std::endl;

    if ( (x+y+z) < 1){
        if (x < y && x < z){ x = (y + z)/2; }
        if (y < x && y < z){ y = (x + z)/2; }
        if (z < y && z < x){ z = (x + y)/2; }
    }
    else{
        if (x < y){ x = (y + z)/2; }
        else{ y = (x + z)/2; }
    }
    std::cout << "Стало: x = " << x << " y = " << y << " z = " << z << std::endl;
}