
#include<iostream>
#include <cmath>
using namespace std;

int range_of_datatype(int n)
{
    int min_range = pow(-2 , (n-1));
    int max_range = (pow(2, (n-1)) - 1);

    cout<<"Minimum Range: "<<min_range<<" to "<<"Maximim Range: "<<max_range<<endl;
    return 0;
}

int main()
{
    int dt;
    cout<<"Enter size of datatype: ";
    cin>>dt;
    dt = dt*8;
    range_of_datatype(dt);
    return 0;
}