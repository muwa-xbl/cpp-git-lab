#include <iostream>
#include <string>

int main(){
    std::string chas;
    std::string minut;

    std::cout << "отредактированно: ";
    std::cin >> chas;
    std::cout << "отредактированно: ";
    std::cin >> minut;

    std::string time = chas + ":" + minut;
    
    std::cout << "отредактированно: " << time;
    return 0;
}
