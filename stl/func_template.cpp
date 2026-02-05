#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

template <typename T>
T max(T a, T b){
    return (a > b) ? a : b;
}
template<typename T1, typename T2>
void func(T1 a, T2 b){
    std::cout << a << " " << b << std::endl;
}
template<typename T>
void swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}
struct Person{
    std::string name;
    int age;
    bool operator>(const Person&rhs)const{
        return this->age > rhs.age;
    }
};

int main(){
    std::cout << "The max between 10 and 20 is: " << max<int>(10,20) << std::endl;
    int a = 10;
    int b = 20.4;
    swap(a,b);
    std::cout << a << " " << b << std::endl;
    Person p1 {"Ali",23};
    Person p2 {"Ahmed", 20};
    Person p3 = max(p1,p2);
    std::cout << p3.name << " is older" << std::endl;
}