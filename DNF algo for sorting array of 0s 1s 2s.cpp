#include <iostream>
using namespace std;

void swap(int a1[], int a, int b)
{
    int temp = a1[a];
    a1[a] = a1[b];
    a1[b] = temp;
}

int dnf_sort(int array[], int size)
{
    int mid = 0;
    int low = 0;
    int high = size - 1;

    while (mid <= high)
    {
        if (array[mid] == 0) //send 0s to left and mid moves forward
        {
            swap(array, mid, low);
            low++;
            mid++;
        }
        else if (array[mid] == 1) //mid moves forward
        {
            mid++;
        }
        else //sends 2s to the right and mid doesn't move
        {
            swap(array, mid, high);
            high--;
        }
    }
    return 0;
}

int main()
{
    int arr[7] = {0,0,1,2,2,0,1};
    dnf_sort(arr, 7);
    cout<<"Here's your sorted array!"<<endl;
    for(int i = 0; i<7; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}