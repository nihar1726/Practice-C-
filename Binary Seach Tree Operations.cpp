#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }

    friend void InsertRecursively(node *newnode, int value);
    friend void PreOrder(node *newnode);
    friend void PostOrder(node *newnode);
    friend void InOrder(node *newnode);
    friend node *search_tree(node *parent, int element);
};

void InsertRecursively(node *newnode, int value)
{
    if (value < newnode->data)
    {
        if (newnode->left == nullptr)
        {
            newnode->left = new node(value);
        }
        else
        {
            InsertRecursively(newnode->left, value);
        }
    }

    else
    {
        if (newnode->right == nullptr)
        {
            newnode->right = new node(value);
        }
        else
        {
            InsertRecursively(newnode->right, value);
        }
    }
}

void PreOrder(node *newnode)
{
    if (newnode == nullptr)
        return;

    cout << newnode->data << " ";
    PreOrder(newnode->left);
    PreOrder(newnode->right);
}

void PostOrder(node *newnode)
{
    if (newnode == nullptr)
        return;

    PostOrder(newnode->left);
    PostOrder(newnode->right);
    cout << newnode->data << " ";
}

void InOrder(node *newnode)
{
    if (newnode == nullptr)
        return;

    InOrder(newnode->left);
    cout << newnode->data << " ";
    InOrder(newnode->right);
}

node *search_tree(node *parent, int element)
{
    if (parent == nullptr || parent->data == element)
    {
        return parent;
    }

    if (element > parent->data)
    {
        return search_tree(parent->right, element);
    }
    else
    {
        return search_tree(parent->left, element);
    }
}

int main()
{
    node *root = new node(9);

    InsertRecursively(root, 56);
    InsertRecursively(root, 52);
    InsertRecursively(root, 42);
    InsertRecursively(root, 48);
    InsertRecursively(root, 61);
    InsertRecursively(root, 15);
    InsertRecursively(root, -1);
    InsertRecursively(root, 156);
    InsertRecursively(root, 13);
    InsertRecursively(root, -89);
    InsertRecursively(root, -45);
    InsertRecursively(root, 1);

    cout << "PRE ORDER TRAVERSAL: " << endl;
    PreOrder(root);
    cout << endl;

    cout << "POSTORDER TRAVERSAL: " << endl;
    PostOrder(root);
    cout << endl;

    cout << "InORDER TRAVERSAL: " << endl;
    InOrder(root);
    cout << endl;

    int ele;
    cout << "\nEnter element you wish to find: ";
    cin >> ele;

    node *result = search_tree(root, ele);
    if (result != nullptr)
    {
        cout << "Found! " << result->data << endl;
    }
    else
    {
        cout << "Could not find! " << ele << endl;
    }

    return 0;
}