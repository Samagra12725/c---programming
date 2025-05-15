#include <iostream>
using namespace std;

class Account
{
private:
    // data hiding will happening here int line 7 and 8
    int password;
    double balance;

public:
    string name;
    string id;

    void changeName(string newName)
    {
        name = newName;
    }
};

int main()
{
    Account u1;
    u1.name = "rahul";
    u1.id = "rah@";
    // u1.password = 4564584;  cant't be accesible because it is private
    // u1.balance=48748;
    cout << u1.name << endl;
    cout << u1.id << endl;
}