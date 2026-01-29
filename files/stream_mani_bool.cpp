#include <iostream>
#include <iomanip> // provides definitions for manipulators used to format stream I/O

int main(){
    // All further booleans will be either true or false instead of 0 or 1
    std::cout << std::boolalpha; // true or false
    // To disable it we can use std::cout << std::noboolalpha
    /*The method versions for std::cout << std::boolalpha
        std::cout.setf(std::ios::boolalpha)
    */
   std::cout << "boolean alpha :  (10 == 10)" << (10 == 10) << std::endl;
   std::cout << "boolean alpha : (20 == 10) " << (20 == 10) << std::endl;
   /*The method versions for std::cout << std::noboolalpha
        std::cout.setf(std::ios::noboolalpha)
    */
   std::cout << "0/1 Version:"<< std::endl;
   std::cout << std::noboolalpha;
   // All further booleans will be either 0 or 1 instead of true or false
   std::cout << "no boolean alpha :  (10 == 10)" << (10 == 10) << std::endl;
   std::cout << "no boolean alpha : (20 == 10) " << (20 == 10) << std::endl;
   /*The method versions for std::cout << std::noboolalpha
        std::cout.setf(std::ios::noboolalpha)
    */
   std::cout << "true/false Version with setf method:"<< std::endl;
   std::cout.setf(std::ios::boolalpha);
   std::cout << "ios::boolean alpha :  (10 == 10)" << (10 == 10) << std::endl;
   std::cout << "ios::boolean alpha : (20 == 10) " << (20 == 10) << std::endl;

   //reset to default with is 0/1
   // we have to use std::cout before std::resetiosflags(std::ios::boolalpha);
   std::cout<<std::resetiosflags(std::ios::boolalpha);
   std::cout << "Default :  (10 == 10)" << (10 == 10) << std::endl;
   std::cout << "Default : (20 == 10) " << (20 == 10) << std::endl;

}
