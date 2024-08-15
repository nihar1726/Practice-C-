//Linear complexity
//follows a right to left approach

#include <iostream>
using namespace std;

int leaders_array (int array[], int size)
{
    int leader_from_right = array[size - 1];
    cout<<"Leader from right: "<<leader_from_right<<endl;
    for (int i = size - 2; i>=0; i--)
    {
        if (leader_from_right < array[i])
            cout<<"Leader from right: "<<array[i]<<endl;
            leader_from_right = array[i];
    }
    return 0;
}

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Here's your leader strating from right!"<<endl;
    leaders_array(arr, n);
    return 0;
}