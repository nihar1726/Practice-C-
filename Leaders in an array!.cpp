//nested loop approach (quadratic time complexity)
#include <iostream>
using namespace std;

void leaders_array (int array[], int size)
{
    for (int i = 0; i<size; i++)
    {
        int j;
        for (j = i + 1; j<size; j++)
        {
            if (array[i] <= array[j])
                break;
        }
        if (j == size)
            cout << array[i] <<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    //int arr[10] = {1,23,5,6,7,14,8,9,15,3};
    cout<<"Enter elements of array: "<<endl;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    //int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Here's your leaders!"<<endl;
    leaders_array(arr, n);
    return 0;
}
