#include <iostream>
#include <string>
using namespace std;

// HERE FUNCTION OVERLOADING IS DONE

class Parent
{
public:
  int add(int a, int b)
  {
    return a + b;
  }

  double add(double a, double b)
  {
    return a + b;
  }

  float add(float a, float b, float c)
  {
    return a + b + c;
  }
};

int main()
{
  Parent p;
  cout << p.add(2, 6) << endl;
  cout << p.add(2.3, 6.9) << endl;
  cout << p.add(2.3, 6.9, 8.3) << endl;
}