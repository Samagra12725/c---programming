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
class Student : public Person
{ // Inherit properties of Person
public:
    int rollno;
};

class GradStudent : public Student
{ // Inherit properties of Student
public:
    string research_area;
};

int main()
{
    GradStudent s1;
    s1.name = "halwa";
    s1.age = 21;
    s1.rollno = 487;
    s1.research_area = "physics";
    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.research_area << endl;
}
