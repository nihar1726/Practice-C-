#include <iostream>
using namespace std;

int main()
{
    int rows = 5;

    for (int i = rows; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}