
#include <iostream>
#include <cstdlib>
#include <ctime> 


// Good for math: #include <cmath>

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


    /*
    Multi- line comments! 
    */


    /* FUNDAMENTAL TYPES        TYPE        BYTES

                                INT         4
                                Short       2
                                Long        4
                                Long long   8

                                FLOAT       4
                                DOUBLE      8
                                Long double 8

                                BOOL        1
                                CHAR        1
    */ 

    // CAN USE auto to infer the type! 
    auto price = 99.99f; // FLOAT! The 'f' at the end of the number indicates a float instead of a double
    auto expensive = 99999.99; // DOUBLE! automatically assumed it's a double, when a decimal is present
    auto distance = 10000l; // LONG! The 'l' at the end of the number indicates a long instead of an int

    // initializing a variable with brackets
    int newnumber {}; // benefits: initializes to 0, doesn't run the code when the type definition and value don't match. 

    // numbers in different sistems
    int twofiftyfive = 255; // decimal 
    twofiftyfive = 0b11111111; // binary 
    twofiftyfive = 0xff; // hexadecimal

    // CAREFUL when converting short -> integer, or any of the fundamental types! Can cause a loss in values due to varying memory sizes

    // Random numbers: need to include cstdlib and ctime at the top of our code
    long elapsedSeconds = time(nullpointer); 
    srand(elapsedSeconds); // can shorten code by inputting time(nullpointer) directly
    int number = rand() % 10; 
    std:: cout << number; 

    // Rolling a dice 
    const short minValue = 1;
    const short maxValue = 6;
    (rand() % (maxValue - minValue + 1) ) + minValue // Random number formula: (random (maxvalue - minvalue + 1)) +minvalue
     

    return 0;
}
