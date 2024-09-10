#include <iostream>
using namespace std;

class node
{
    int data;
    node* next;
    friend void insert_element_in_ll_print(int number);
};

void insert_element_in_ll_print(int number)
{
    node* head = nullptr;
    node* tail = nullptr;
    int element;

    for (int i = 1; i<=number; i++)
    {
        cout<<"Element "<<i<<" :";
        cin>>element;

        node* newNode = new node;
        newNode -> data = element;
        newNode -> next = nullptr;

        if (head == nullptr) //in case it's our first node
        {
            head = newNode;
            tail = head;
        }
        else //if it's not the first
        {
            tail -> next = newNode; //tail->next means currently last node which will store address of new node
            tail = tail -> next; //tail will now point to this new node
        }
    }
    //print the node!
    cout<<"ELEMENTS STORED IN NODE: "<<endl;
    node* current = head;
    while (current != nullptr)
    {
        cout<<current -> data<<endl;
        current = current -> next;
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter number of elements you wish to work on: ";
    cin>>n;
    insert_element_in_ll_print(n);
    return 0;
}