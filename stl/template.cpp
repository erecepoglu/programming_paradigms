#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

#define MAX(a,b) ((a>b) ? a : b)

int main(){
    std::cout << MAX(1,2) << std::endl;
    std::cout << MAX(1.2,2.1) << std::endl;
    std::cout << MAX('A','C') << std::endl;

}