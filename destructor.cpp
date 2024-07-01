#include <iostream>
using namespace std;

class department
{
    public:
    string name;
    department() //default const.
    {
        cout<<"Default constructor called"<<endl;
    }
    department(string n)
    {
        n = name;
        cout<<"Parametrised Constructor called"<<endl;
    }
    department(department &obj)
    {
        name=obj.name;
        cout<<"Copy constructor called"<<endl;
    }
    ~department()
    {
        cout<<"Destructor was called!"<<endl;
    }
};
int main()
{
    department obj1;
    department obj2("Nihar");
    department obj(obj2);
    return 0;
}