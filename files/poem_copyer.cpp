#include <iostream>
#include <fstream>
#include <iomanip>

int main(){
    std::ifstream in_file{"romeo_juliet.txt"};
    std::ofstream out_file{"poem.txt"};
    std::string line{};

    if(!in_file) std::cerr << "Error while opening input file" << std::endl;
    if(!out_file) std::cerr << "Error while opening output file" << std::endl;

    while(std::getline(in_file,line)){
        out_file << line << std::endl;
    }
    std::cout << "File copied" << std::endl;
    in_file.close();
    out_file.close();
    in_file.open("poem.txt");
    if(!in_file) std::cerr << "Error while opening input file" << std::endl;
    while(in_file >> line){
        std::cout << line << " ";
    }
}