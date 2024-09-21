#include <iostream>
using namespace std;

void factorial (int number)
{
    long factorial = 1.0;
    if (number < 0)
        cout<<"Error!";
    else 
    {
        for (int i = 1; i<=number; i++)
        {
            factorial = factorial * i;
        }
        cout<<"Factorial of "<<number<<"="<<factorial;
    }
}

int main()
{
    int n;
    cout<<"Enter a positive number:";
    cin>>n;

   factorial(n);
    return 0;
}