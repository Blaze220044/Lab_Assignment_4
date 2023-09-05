// DATA TYPES

#include <iostream>

int main() {

    int x;  // declaration of variable
    x = 5;

    std::cout << x << '\n';

    // OR

    int a = 2;  // int includes only whole no.s not decimals 
    int b = 4;
    int sum = a + b;

    double l = 5.9; // double includes decimals

    char grade = 'A'; // char stores only 1 character

    bool student = true; // boolean (true or false)

    std::string sentence = "Hi, this is a test sentence";

    std::cout << sentence << '\n';
    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << sum << '\n';
    std::cout << "Hello! " << sentence; // directly printing a string
    return 0;
}