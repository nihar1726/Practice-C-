#include <iostream>
using namespace std;

int fib (int n)
{
    int f[n + 2];
    int i;
    f[0]=0;
    f[1]=1;

    for (int i=2; i<=n; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }
    cout<<"Fibnocci is "<<f[n]<<endl;
    return 0;
}
int main()
{
    int n=9;
    cout<<fib(n);
    return 0;
}