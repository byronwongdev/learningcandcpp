/*
datatype
*/
#include <iostream>
#include <climits>

using std::cout;

int main() // main function
{
    short a;
    int b; // at least 16
    long c; // at 32 bit
    long long d; // at least 64 bit
    // short <= int <= long <= longlong
    // unsigned must positive
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;


    cout << "short:" << sizeof(short) << std::endl;
    cout << "int:" << sizeof(int) << std::endl;
    cout << "long:" << sizeof(long) << std::endl;
    cout << "long long:" << sizeof(long long) << std::endl;
    cout << "unsigned short:" << sizeof(unsigned short) << std::endl;
    cout << "unsigned int:" << sizeof(unsigned int) << std::endl;
    cout << "unsigned long:" << sizeof(unsigned long) << std::endl;
    cout << "unsigned long long:" << sizeof(unsigned long long) << std::endl;

    cout << SHRT_MAX << std::endl;
    cout << SHRT_MIN << std::endl;
    cout << USHRT_MAX << std::endl;
    cout << ULLONG_MAX << std::endl;
}

