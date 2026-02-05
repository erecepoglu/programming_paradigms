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

    std::vector<int> vec{1,2,3};
    std::vector<int>::iterator t1;// it will iterate only over vector
    std::list<std::string>::iterator it2; // it will iterate only over list
    std::map<std::string, std::string>::iterator it3;  // it will iterate only over map
    std::set<char>::iterator it4;

    auto it = vec.begin();
    /*std::map is ordering the values of key by default so the 
    searching/inserting/deleting complexity is O(log n)
    ->if we're using std::unorder_map complexity will be O(1) so unorder_map
        is unordered  
    */
    std::map<std::string, int> maps{{"Core i7",10}, {"RAM",32}, {"SSD",256}};
    std::map<std::string,int>::iterator it6;

    maps.insert({"Arrow",12});
    it6 = maps.begin();
    while(it6 != maps.end()){
        std::cout << "{ "<<it6->first << " : " << it6->second <<" }"<< std::endl;;
        it6++;
    }

}