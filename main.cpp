#include <iostream>

int main() {
    int file_size = 0; 
    double sales = 99.99; 
    std:: cout << "Hello World!"; 
    std:: cout << file_size; 
    return 0;
}


// Problem 1: Swap the value of two variables!

int swap() { 
    int a = 1; 
    int b = 2; 
    // Swap the variables! 
    int c = a;
    int d = b; 

    int a = d; 
    int b = c; 

    cout << a; 
    cout << b;

    // Easier solution: only use one more variable. c = a, a = b, b = c. 
}
main()