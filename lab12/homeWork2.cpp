#include <iostream>
#include <fstream>
#include <string> 

int main()
{

    std::ifstream nums("./hmw1_nums.txt");

    std::string line;
    int minNumber = pow(10,5);
    if(nums.is_open()){
        while (std::getline(nums, line)) {
            int number = std::stoi(line);
            if (number < minNumber && number > 0 ){
                minNumber = number;
            }
        }
        std::cout << "Min Number = " << minNumber << std::endl; 
    }
    else{
        std::cout << "file not open" << std::endl;
    }
    nums.close(); 


}