/*
escape sequence
*/
#include <iostream>

using std::cout;

int main() // main function
{
    cout << "Hello\tThere" << std::endl ;
    cout << "Hello\bThere" << std::endl ;
    cout << "Hello\nThere" << std::endl ;
    cout << "Hello\vThere" << std::endl ;
    cout << "Hello\aThere" << std::endl ;
    cout << "Hello\0There" << std::endl ;
}

