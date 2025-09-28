#include <iostream>

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int x;
    std::cout << "Введите день недели: ";
    std::cin >> x;

    switch (x)
    {
    case 1:
        std::cout << "Понедельник" << std::endl;
        break;
    case 2:
        std::cout << "Вторник" << std::endl;
        break;
    case 3:
        std::cout << "Среда" << std::endl;
        break;
    case 4:
        std::cout << "Четверг" << std::endl;
        break;
    case 5:
        std::cout << "Пятница" << std::endl;
        break;
    case 6:
        std::cout << "Суббота" << std::endl;
        break;
    case 7:
        std::cout << "Воскресенье" << std::endl;
        break;
    
    default:
        std::cout << "Ошибка" << std::endl;
        break;
    }
}
