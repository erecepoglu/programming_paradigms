#include <iostream>
#include <iomanip>
#include <fstream>

int main(){
    std::ofstream out_file{"output.txt", std::ios::app};
    if(!out_file) std::cerr << "Problem while opening the file" << std::endl;
    std::string line;
    std::cout << "Enter something to write to the file: ";
    std::getline(std::cin, line);
    out_file << line << std::endl;
    
    out_file.close();
}
