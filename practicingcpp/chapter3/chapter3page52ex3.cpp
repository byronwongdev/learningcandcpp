#include <iostream>
#include <string>

using namespace std;

int main()
{   
    string message ("\n I have learned something new again!"), 
    prompt ("Please enter two strings"), 
    str1,
    str2,
    sum;

    cout << message << endl;
    cout << message.length() << endl;

    cout << prompt << endl;
    getline( cin, str1);
    getline( cin, str2);

    sum = str1+ " * " + str2;
    cout << sum << endl;

    return 0;
}