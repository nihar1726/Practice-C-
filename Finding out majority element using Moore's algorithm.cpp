//this is for majority element that is n/2 times

#include<iostream>
using namespace std;

int more_than_nby2(int array[], int size)
{
    int votes;
    int candidate;
    for (int i = 0; i<size; i++) //moore's voting!
    {
        if (votes == 0) //sets current element
        {
            candidate = array[i];
            votes++;
        }
        else if (array[i] == candidate) //increaments
        {
            votes++;
        }
        else{ //decreaments
            votes--;
        }
    }

    int count = 0;

    for (int i = 0; i<size; i++)
    {
        if(array[i] == candidate) 
            count++;
    }
    //checking is majority element even exists
    if (count < (size/2))
        cout<<"Majority element does not exist!"<<endl;

    return candidate;
}


int main()
{
    int arr[15] = {1,1,2,8,8,8,6,6,6,6,6,6,6,3,3};
    int result = more_than_nby2(arr, 15);
    cout<<"Majority element: "<<result<<endl;
    return 0;
}


