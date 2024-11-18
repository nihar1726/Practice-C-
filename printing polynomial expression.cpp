#include <iostream>
using namespace std;

int main()
{
    int expression[] = {7, 1, 16, 5};
    int degree = 3;
    cout<<"POLYNOMIAL EXPRESSION"<<endl;
    for(int i = degree; i>=0; i--)
    {
        cout<<expression[i]<<"x^"<<i;
        if (i>0)
        {
            cout<<" + ";
        }
    }

    return 0;
}