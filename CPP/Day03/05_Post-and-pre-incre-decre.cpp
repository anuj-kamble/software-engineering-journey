#include <iostream>

int main(){

    int a = 5;
    int b = a++;

    int c = 10;
    int d = ++c;

    std::cout << " Post-Increment :"<<std::endl;
    std::cout << " a = "<< a <<std::endl;
    std::cout << " b = "<< b <<std::endl;

    std::cout << "Pre-Increment : "<<std::endl;
    std::cout << " c = " << c << std::endl;
    std::cout << " d = " << d << std::endl;


    return 0;
}