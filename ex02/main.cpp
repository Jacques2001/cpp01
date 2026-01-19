#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    std::cout << &str << std::endl; // memory address of str
    std::cout << &stringPTR << std::endl; // memory address of stringPTR
    std::cout << &stringREF << std::endl; // ??
    std::cout << str << std::endl; // value of str
    std::cout << *stringPTR << std::endl; // value of stringPTR
    std::cout << stringREF << std::endl; // value of stringREF
    return 0;
}