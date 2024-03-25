#include <iostream>
#include "Factorial.cpp"

int main() {
    FactorialCalculator calculator;
    int x;
    std::cout<<"Enter the number to find the factorial";
    std::cin>>x;
    std::cout << calculator.factorialWithStack(x) << std::endl; 
    return 0;
}
