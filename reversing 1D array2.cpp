//using same array and loop

#include <iostream>
using namespace std;

int reverse_array(int array[], int start, int end, int size)
{
    
    while (start < end)
    {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
    cout<<"Here's your reversed array!"<<endl;
    for (int i = 0; i<size; i++)
    {
        cout<<array[i]<<endl;
    }
    return 0;
}

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array!"<<endl;
    for (int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    reverse_array(arr, 0, n-1, n);
    return 0;
}