#include <iostream>
#include <iomanip>

int main(){
    int num{255};
    std::cout << std::showbase; //default is no base
    std::cout << std::dec << num << std::endl;
    std::cout << std::hex << num << std::endl;
    std::cout << std::oct << num << std::endl;

    // using showBase and upperCase together
    std::cout << std::showbase << std::uppercase;
    std::cout << std::hex << num << std::endl;
    int num2 = -255;

    std::cout<<std::resetiosflags(std::ios::hex);
    std::cout << std::showpos;
    std::cout << num << std::endl;
    std::cout << num2 << std::endl;

    std::cout<<std::resetiosflags(std::ios::hex);
    std::cout<<std::resetiosflags(std::ios::dec);
    std::cout<<std::resetiosflags(std::ios::oct);

    std::cout << "-----------" << std::endl;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> num;

    std::cout << "Decimal: " << std::dec << num << std::endl;
    std::cout << "Hexadecimal: " << std::hex << num << std::endl;
    std::cout << "Octal: " << std::oct << num << std::endl;


}