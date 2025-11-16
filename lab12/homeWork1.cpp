#include <iostream>
#include <fstream>
#include <string> 

int main()
{


    std::ifstream nums("./hmw1_nums.txt");

    std::string line;
    int sum = 0;
    if(nums.is_open()){
        while (std::getline(nums, line)) {
            int number = std::stoi(line);
            if (number % 2 == 0){
                sum += number;
            }
        }
        std::cout << sum << std::endl; 
    }
    else{
        std::cout << "file not open" << std::endl;
    }
    nums.close(); 


}