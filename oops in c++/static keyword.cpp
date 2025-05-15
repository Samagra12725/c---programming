#include <iostream>
#include <string>
using namespace std;
int func(){
   static int x = 0;
    cout<<"x:"<<x<<endl;
    x++;
}
int main()
{ 
    func();
    func();
    func();

}