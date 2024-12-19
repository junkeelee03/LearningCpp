#include <iostream>

using namespace std; // allows you to not type in "std::" before any of the commands that are from standard 

int main() { 
    std:: cout << "Hello World!" << std:: endl; 


    // Problem 1: Swap the value of two variables!

    int a = 1; 
    int b = 2; 
    // Swap the variables! 
    int temporary = a;
    a = b; 
    b = temporary;

    std:: cout << a << std:: endl; 
    std:: cout << b << std:: endl;

    // Using constants: The value of a variable does not change! 
    const double pi = 3.14;


    // Naming conventions
    int file_size; // Snake Case
    int FileSize; // Pascal Case -> classes
    int fileSize; // Camel Case -> variables and constants


    // Mathematical expressions: +, -, *, /, % (remainder of a division), 
    // increments (x++ adds it after, ++x adds it before), decrements (x-- subtracts if after, --x subtracts before)
    int x = 10; 
    int y = x++; // y = 10, x = 11
    int z = --x; // z = 9, x = 9, if we ignore the previous line. If we include it, x = 10.
    // PEMDAS APPLIES! 


    // Writing output on the console 
    int x1 = 10; 
    int y1 = 20; 
    std:: cout << "x = " << x << std:: endl;
    std:: cout << "y = " << y << std:: endl;
    

    // Reading from the console
    std:: cout << "Enter a value for x and y, separated by space: "; // Can chain values together, separated by an enter or a space 
    double x2;
    double y2;  
    std:: cin >> x2 >> y2;
    std:: cout << x2 + y2;   
    
    // Exercise: Ask the user to input a temperature in Fahrenheit, convert it to Celsius
    std:: cout << "Enter the temperature in degrees Fahrenheit: ";
    double tempFahrenheit; 
    double tempCelsius = (tempFahrenheit - 32) * (5/9); 
    std:: cout << "The temperature in degrees Celsius: " << tempCelsius; 

    return 0;
}
