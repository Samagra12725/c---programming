#include <iostream>
#include <string>
using namespace std;
class Teacher
{
private:
    double salary;

public:
    // properties / attributes

    string name;
    string dept;
    string subject;
    // double salary;

    // methods / member functions
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // setter
    void setSalary(double s)
    {
        salary = s;
    }

    // getter
    double getSalary()
    {
        return salary;
    }
};
int main()
{ // objects
    Teacher t1;
    t1.name = "samagra";
    t1.subject = "c++";
    t1.dept = "Computer science";
    t1.setSalary(25000);

    // class teacher 2
    Teacher t2;
    t2.name = "ayush";
    t2.subject = "java";
    t2.dept = "Computer science";
    t2.setSalary(150);

    cout << t1.name << endl;
    cout << t1.subject << endl;
    cout << t1.getSalary() << endl
         << endl;

    // getting techer 2 values
    cout << t2.name << endl;
    cout << t2.subject << endl;
    cout << t2.getSalary() << endl;
}