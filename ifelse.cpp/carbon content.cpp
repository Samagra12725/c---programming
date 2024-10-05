#include<iostream>
using namespace std;
int main()
{// h=hardness , cc=carbon content , ts=tensile strength
    float h,cc,ts;
    cout<<"enter Hardness , Carbon Content , Tensile Strength";
    cin>>h>>cc>>ts;
    if(h>50&&cc<0.7&&ts>5600)
    cout<<"grade 10";
      else if(h>50&&cc<0.7)
       cout<<"grade 9";
        else if(cc<0.7&&ts>5600)
          cout<<"grade 8";
            else if(h>50&&ts>5600)
              cout<<"grade 7";
                else if(h>50||cc<0.7||ts>5600)
                  cout<<"grade 6";
                    else 
                        cout<<"grade 7";
}