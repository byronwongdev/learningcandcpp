#include <iostream>
using namespace std;

int main()
{
    cout << "\nType\t\t Size" << endl;
    cout << "\nbool\t\t " << sizeof(bool) << endl;
    cout << "\nchar\t\t " << sizeof(char) << endl;
    cout << "\nwchar_t\t\t " << sizeof(wchar_t) << endl;
    cout << "\nshort\t\t " << sizeof(short) << endl;
    cout << "\nint\t\t " << sizeof(int) << endl;
    cout << "\nlong\t\t " << sizeof(long) << endl;
    cout << "\nfloat\t\t " << sizeof(float) << endl;
    cout << "\ndouble\t\t " << sizeof(double) << endl;
    cout << "\nlong double\t" << sizeof(long double) << endl;

    return 0;
}