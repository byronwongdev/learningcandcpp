#include <iostream>
using namespace std;

void happy(), oh();

int main()
{
    oh();
    cout << " what" << endl;
    cout << "a";
    happy();
    cout << endl;
    oh();
    cout << " yes," << endl;
    cout << "what a";
    happy();

    return 0;
}

void happy()
{
    cout << " happy day!";
}

void oh()
{
    cout << "Oh";
}