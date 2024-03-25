#include <iostream>
#include "LabCycle2-11.cpp"

int main() {
    FactorialCalculator calculator;
    int x;
    std::cout<<"Enter the number to find the factorial";
    std::cin>>x;
    std::cout << calculator.factorialWithStack(x) << std::endl; 
    return 0;
}
