#include <iostream>
using namespace std;

int main()
{
    int rows = 5;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < rows + 1 - (2 * i + 1); j++) // 6-1, 6-3, 6-1
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// void pattern8(int N)
// {
//     // This is the outer loop which will loop for the rows.
//     for (int i = 0; i < N; i++)
//     {
//         // For printing the spaces before stars in each row
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }

//         // For printing the stars in each row
//         for (int j = 0; j < 2 * N - (2 * i + 1); j++)
//         {

//             cout << "*";
//         }

//         // For printing the spaces after the stars in each row
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }

//         // As soon as the stars for each iteration are printed, we move to the
//         // next row and give a line break otherwise all stars
//         // would get printed in 1 line.
//         cout << endl;
//     }
// }

// int main()
// {
//     // Here, we have taken the value of N as 5.
//     // We can also take input from the user.
//     int N = 5;

//     pattern8(N);

//     return 0;
// }