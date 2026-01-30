#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <algorithm>
#include <cctype>

std::string to_lowercase(const std::string &str){
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(), 
                   [](unsigned char c){ return std::tolower(c); });
    return result;
}

bool find_substring(const std::string &word_to_find, const std::string &target){
    std::size_t found = target.find(word_to_find);
    if(found == std::string::npos){return false;}
    return true;
}

int main(){
    std::ifstream in_file{"romeo_juliet.txt"};
    std::string word_to_find{};
    std::string word_read{};
    int word_count{0};
    int match_count{0};
    if(!in_file) std::cerr << "Problem opening the file" << std::endl;
    
    std::cout << "Enter a substring to search for: ";
    std::cin >> word_to_find;

    while(in_file >> word_read){
        ++word_count;
        if(find_substring(to_lowercase(word_to_find),to_lowercase(word_read))){
            ++match_count;
            std::cout << word_read << " ";
        }
    }
    std::cout << word_count << " words were searched.." << std::endl;
    std::cout << "The substring " << word_to_find 
            << " was found " << match_count << " times" << std::endl;
}