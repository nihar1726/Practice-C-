//using another array!

#include <iostream>
using namespace std;

int reverse_array(int array[], int size)
{
    int reversed_array[size];
    for (int i = 0; i<size; i++)
    {
        reversed_array[i] = array[size - i - 1];
    }
    cout<<"Here's your reversed array!"<<endl;
    for (int i = 0; i<size; i++)
    {
        cout<<reversed_array[i]<<endl;
    }
    return 0;
}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for (int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    reverse_array(arr, n);
    return 0;
}