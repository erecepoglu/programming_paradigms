#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>

int main(){
    /*Iterators must be declared based on the container type 
        they will iterate over.
        container_type::iterator iterator_name;
        */
    std::vector<int>::iterator t1;// it will iterate only over vector
    std::list<std::string>::iterator it2; // it will iterate only over list
    std::map<std::string, std::string>::iterator it3;  // it will iterate only over map
    std::set<char>::iterator it4;
}