#include <iostream>
#include <iomanip>

int main(){
    float num1 {1234.5678};
    // default precision(digits) is 6 so it will show 6 digits only 1234.57
    std::cout << num1 << std::endl;
    std::cout << "After std::setprecision(9): " << std::endl;
    std::cout << std::setprecision(9);// now it will show 9 digits
    std::cout << num1 << std::endl;
    std::cout << std::scientific;// for scientific notation
    std::cout << num1 << std::endl;

}