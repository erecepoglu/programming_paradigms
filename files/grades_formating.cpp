#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

void print_header(){
    std::cout << std::setw(15) << std::left << "Student"
                << std::setw(5) << "Score" << std::endl;
    std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');
}
void print_student(const std::string &name, int score){
   std::cout << std::setprecision(1) << std::fixed;
   std::cout << std::setw(15) << std::left << name 
            << std::setw(5) << std::right << score << std::endl;
}
int process_response(const std::string &respose, const std::string &answer_key){
    int score = 0;
    for(size_t i = 0; i < answer_key.size(); ++i){
        if(respose.at(i) == answer_key.at(i)){
            score++;
        }
    }
    return score;
}
void print_footer(double average){
    std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');
    std::cout << std::setw(15) << std::left << "Average score"
        << std::setw(5) << std::right << average << std::endl;
}
int main(){
    std::ifstream in_file{"grades.txt"};
    std::string answer_key{};
    std::string name{};
    std::string response{};
    int running_sum{0};
    int total_students{0};
    double average_score{0.0};

    if(!in_file) std::cerr << "Problem opening file" << std::endl;

    in_file >> answer_key;//reading the first line of the file

    print_header();

    while(in_file >> name >> response){
        ++total_students;
        int score = process_response(response,answer_key);
        running_sum += score;
        print_student(name,score);
    }
    if(total_students != 0) average_score = static_cast<double>(running_sum)/total_students;
    print_footer(average_score);

}