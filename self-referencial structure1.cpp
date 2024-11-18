//With single link!
#include <iostream>
using namespace std;

struct person
{
    string name;
    int id;
    struct person* ptr;
};

int main()
{
    struct person obj1, obj2;

    obj1.ptr = NULL;
    obj1.name = "Priyanshi";
    obj1.id = 51;

    obj2.ptr = NULL;
    obj2.name = "Paramveer";
    obj2.id = 56;

    obj1.ptr = &obj2;

    cout<<"OBJECT ONE VALUES"<<endl;
    cout<<"NAME: "<<obj1.name<<endl;
    cout<<"ID: "<<obj1.id<<endl;
    cout<<"OBJECT TWO VALUES ACCESSED BY POINTER TO STRUCTURE OF OBJECT ONE"<<endl;
    cout<<"NAME: "<<obj1.ptr -> name<<endl;
    cout<<"ID: "<<obj1.ptr -> id<<endl;

    return 0;
}