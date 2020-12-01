#include <iostream>
#include <string>
using namespace std;

string header =
" --- Demonstrates Unformatted Input ---";

int main()
{
    string word, rest;

    cout << header << "\n\nPress <return> to go on" << endl;

    cin.get(); 

    cout << "\nPlease enter a sentence with several words!"
    << "\nEnd with <!> and <return>."
    << endl;

    cin >> word; 
    getline( cin, rest, '!'); 

    cout << "\nThe first word: " << word
    << "\nRemaining text: " << rest << endl;
    return 0;
}