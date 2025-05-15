#include <iostream>
#include <string>
using namespace std;
class Teacher
{
public:
    Teacher() // Constructor is creted
    {
        cout << "hi I am constructor" << endl;
    }

    // properties / attributes

    string name;
    string dept;
    string subject;
};
int main()
{
    // object
    Teacher t1; // Code starts from  here and print "hi I am constructor" but if Tacher() method is not created still code starts from here.
    t1.name = "samagra";
    t1.subject = "c++";

    cout << t1.name << endl;
    cout << t1.subject << endl;
    cout << t1.dept << endl;
}