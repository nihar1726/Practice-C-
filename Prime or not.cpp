//WAP to check whether a number is prime or not

#include<iostream>
using namespace std;

void check_prime (int number)
{
    int i;
    for(i = 2; i<=(number - 1); i++)
    {
        if (number % i == 0)
        {
            cout<<"This is not a Prime number!"<<endl;
            break;
        }
    }
    cout<<"Yes! This is a prime number"<<endl;
    
}
int main()
{
    int num;
    cout<<"Please enter a number: ";
    cin>>num;

    check_prime(num);
    return 0;
}