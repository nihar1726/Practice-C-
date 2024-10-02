#include <iostream>
using namespace std;

int main()
{
    int rows = 5;

    for (int i = rows; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}