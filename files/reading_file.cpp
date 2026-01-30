#include <iostream>
#include <fstream>
#include <string>

int main(){
    /*
        std::ifstream in_file2{"myfile.txt", std::ios::in};
        and std::ifstream in_file{"myfile.txt"}; the same
        because the default is std::ios::in
    */
    std::ifstream in_file{"myfile.txt"}; 
    //Another way to open a file
    std::ifstream file{"myfile.txt"};
    std::string line;
    /*
    std::cin >> file_in;
    file.open();*/
    if(!in_file){
        std::cerr << "Error while opening the file" << std::endl;
    }
    while(!in_file.eof()){
        std::getline(in_file,line);
        std::cout << line << std::endl;
    }
    in_file.close();
}