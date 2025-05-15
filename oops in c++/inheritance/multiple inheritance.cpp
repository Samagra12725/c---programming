#include <iostream>
#include <string>
using namespace std;

// base/parent class
class Person
{
public:
    string name;
    int age;
};

// child/derived class
class Student
{ // Inherit properties of Person
public:
    int rollno;
};

class GradStudent
{ // Inherit properties of Student
public:
    string research_area;
};
class TA :public GradStudent,public Student,public Person{ // MULTIPLE INHERITANCE IS DONE HERE
};

int main()
{
    TA t1;
    t1.name = "tony mark";
    t1.age = 26;
    t1.rollno = 477;
    t1.research_area = "physics";
    cout << t1.name << endl;
    cout << t1.age << endl;
    cout << t1.research_area << endl;
}