#include <iostream>
#include <fstream>

int main(){
    using namespace std;
    fstream FileStream;
    FileStream.open("homeWorkData.bin", ios::binary | ios::in);
    int n = 0;

    if (FileStream.is_open()){
        FileStream.seekg(0);
        int value = 0;
        int chetSum = 0;
        while (FileStream.read(reinterpret_cast<char*>(&value), sizeof(int))){
            cout << value << endl;
            if (value % 2 == 0){ chetSum += value; }
        }

        cout << "Sum chet elements: " << chetSum << endl;
    }

    FileStream.close();

    
}