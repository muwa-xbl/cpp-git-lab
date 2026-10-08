#include <iostream>
#include <string>

int main(){
    std::string chas;
    std::string minut;

    std::cout << "Введите часы: ";
    std::cin >> chas;
    std::cout << "Введите миуты: ";
    std::cin >> minut;

    std::string time = chas + ":" + minut;
    
    std::cout << "Время: " << time;
    return 0;
}
