#include <iostream>
using namespace std;

void check_upper_lower(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "It's lowercase!" << endl;
    }
    if (ch >= 'A' && ch <= 'B')
    {
        cout << "It's uppercase!" << endl;
    }
}

int main()
{
    char character;
    cout << "Enter a character: ";
    cin >> character;

    check_upper_lower(character);
    return 0;
}