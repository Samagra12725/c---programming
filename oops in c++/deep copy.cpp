#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa) {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // Copy constructor
    Student(Student &obj) {
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *(obj.cgpaPtr);
    }
     
     //destructor
    ~Student() {
        delete cgpaPtr;
    }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};

int main() {
    Student s1("Samagra", 3.9);
    Student s2 = s1; // Calls copy constructor

    s1.getInfo();
    s2.getInfo();

    return 0;
}

