#include <iostream>
#include <vector>
#include <algorithm>
#include <format>
#include <string>

static void fun(){
    static int count = 0;
    count++;
    std::cout << count << std::endl;
}
class Emotions{
    static int mSmileDuration;

public:
    static void Smile();
};
int Emotions::mSmileDuration = 3;
void Emotions::Smile(){
    std::cout << "Emotions::mSmileDuration: " << Emotions::mSmileDuration << std::endl;
    puts(":-)");
};

int main(){
    std::vector<int> vec {1,20,0,50};
    int key;
    std::cout << "Enter a number:" << std::endl;
    std::cin >> key;
    auto loc = std::find(vec.begin(),vec.end(),key);
    if(loc != vec.end()){// if loc = vec.end() it means not found
        int index = std::distance(vec.begin(),loc);
        std::cout << *loc << " is found at index " << index<< std::endl;
    }else{
        std::cout << std::format("{} is not found",key) << std::endl;
    }
    fun();
    fun();
    fun();
    fun();
    Emotions::Smile();
}
