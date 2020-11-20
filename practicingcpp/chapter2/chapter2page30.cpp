// Definition and use of variables

#include <iostream>
using namespace std;

int gVar1;
int gVar2 = 2;

int main()
{
    char ch('A'); // local variable being intialized
    // or: char ch = 'A'

    cout << "Value of gVar1:    " << gVar1 << endl;
    cout << "Value of gVar2:    " << gVar2 << endl;
    cout << "Character in ch:   " << ch << endl;

    int sum, number = 3; // local variables with and without intialization
    sum = number + 5;
    cout << "Value of sum:        " << sum << endl;


    return 0;
}