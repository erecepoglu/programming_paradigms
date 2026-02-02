#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main(){
    std::vector<int> vec {2,1,3,5,0,9,19};
    std::sort(vec.begin(),vec.end());
    for(auto elem:vec){
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    std::cout << "------" << std::endl;
    
    int sum = std::accumulate(vec.begin(),vec.end(),0);
    std::cout << "The sum: " << sum << std::endl;
    int subtracting = std::accumulate(vec.rbegin() + 1, vec.rend(), vec.at(vec.size()-1), std::minus<int>());
    std::cout << "Subtraction: " << subtracting << std::endl;
}