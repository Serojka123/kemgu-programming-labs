#include <iostream>
#include <random>
#include <fstream>


int main() {
    using namespace std;
    mt19937 generator(777); // какой то крутой генератор Mersenne Twister 19937
    uniform_int_distribution<int> countNumbers(5, 10); // кол-во чисел
    uniform_int_distribution<int> numbers(-10, 20); // сами числа

    fstream fileStream;

    fileStream.open("homeWorkData.bin", ios::binary | ios::out);
    
    if (fileStream.is_open()){
        cout << "nums in file:" << endl;
        for (int i = 0; i < countNumbers(generator); ++i) {
            int num = numbers(generator);
            fileStream.write(reinterpret_cast<const char*>(&num), sizeof(int));
            cout << "  " << num << endl;
        }
    }
    fileStream.close();
}