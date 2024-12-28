#include <iostream> 
using namespace std;

int main () { 

    /* Datatype overflow: 
    When the max amount of storage a datatype can hold is exceeded, it goes back to its min value. 
    E.g. 
    */ 
    int intmax = INT8_MAX;
    cout << "The maximum value of int is: " << intmax << endl;

    cout << "When you add 1 to the maximum value of int: " << intmax + 1 << endl;
    cout << "It's the same as the minimum value of int!" << endl;

    /* ASCII 
    ALL letters, numbers, and a few symbols, that can be represented into numbers that your computer understands. 
    7 bits, so 128 characters (2^7)
    */
    // Turning characters into numbers: 
    cout << int('a') << endl; 
    cout << (int)'A' << endl;

    // Turning numbers into characters: 
    cout << char(65) << endl; 

    // Making a character into ASCII decoder: 
    char c1, c2, c3, c4, c5;  
    cout << "Enter 5 characters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ASCII message: " << int(c1) << " " << int(c2) << " " << int(c3) << " " << int(c4) << " " << int(c5) << " " << endl;

    // ASCII into characters: 
    int i1, i2, i3, i4, i5; 
    cout << "Enter 5 ASCII numbers: "; 
    cin >> i1 >> i2 >> i3 >> i4 >> i5;
    cout << "Deciphered into characters: " << char(i1) << " " << char(i2) << " " << char(i3) << " " << char(i4) << " " << char(i5) << " " << endl;

    
}