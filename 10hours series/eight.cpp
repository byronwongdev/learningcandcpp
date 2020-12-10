/*
char datatype
*/
#include <iostream>
#include <climits>

using std::cout;

int main() // main function
{
    char x = 'B';           //8 bit
    cout << (int)x << std::endl;
    // base on asciitable
    char y = 65;
    cout << y << std::endl;
    
    char z = 127;       //largest posibility
    cout << z << std::endl;

    signed char w = 129;
    cout << w << std::endl;

    unsigned char v = 129;
    cout << v << std::endl;
}

