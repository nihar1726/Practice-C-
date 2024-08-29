//With multiple links
#include <iostream>
using namespace std;

struct person
{
    string name;
    struct person* previous_link;
    struct person* next_link;

};

int main()
{
    struct person obj1, obj2, obj3;

    obj1.next_link = NULL;
    obj1.previous_link = NULL;
    obj1.name = "Priyanshi";

    obj2.next_link = NULL;
    obj2.previous_link = NULL;
    obj2.name = "Paramveer";

    obj3.next_link = NULL;
    obj3.previous_link = NULL;
    obj3.name = "Nihar";

    obj1.next_link = &obj2;
    obj2.previous_link = &obj1;
    obj2.next_link = &obj3;
    obj3.previous_link = &obj2;

    cout<<"ACCESING OBJECTS USING OBJECT 1"<<endl;
    cout<<"OBJECT 1 - NAME: "<<obj1.name<<endl;
    cout<<"OBJECT 2 - NAME: "<<obj1.next_link -> name<<endl;
    cout<<"OBJECT 3 - NAME: "<<obj1.next_link -> next_link -> name<<endl;

    cout<<"ACCESING OBJECTS USING OBJECT 2"<<endl;
    cout<<"OBJECT 1 - NAME: "<<obj2.previous_link -> name<<endl;
    cout<<"OBJECT 2 - NAME: "<<obj2.name<<endl;
    cout<<"OBJECT 3 - NAME: "<<obj2.next_link -> name<<endl;

    cout<<"ACCESING OBJECTS USING OBJECT 3"<<endl;
    cout<<"OBJECT 1 - NAME: "<<obj3.previous_link -> previous_link -> name<<endl;
    cout<<"OBJECT 2 - NAME: "<<obj3.previous_link -> name<<endl;
    cout<<"OBJECT 3 - NAME: "<<obj3.name<<endl;

    return 0;
}