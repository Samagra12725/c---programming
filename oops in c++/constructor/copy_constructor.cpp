#include <iostream>
#include <string>
using namespace std;
class Teacher
{
public:
    Teacher(string name, string dept, string subject) // parameterised constructor
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
    }
    // copy constructor
    Teacher(Teacher &orgObj) // pass by reference
    {
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
    }

    // properties / attributes

    string name;
    string dept;
    string subject;

    void getInfo() //this is method
    {
        cout << "name = " << name << endl;
        cout << "subject = " << subject << endl;
        cout << "dept = " << dept << endl;
    }
};
int main()
{
    Teacher t1("samagra", "Computer Science", "Data Structure");
    // t1.getInfo();
    Teacher t2(t1); //  copy constructor copies the value of t1 but if copyt constructor is not created still it will give same answer
    t2.getInfo();
}