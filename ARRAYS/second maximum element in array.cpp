// SECOND Maximum element in array
#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;
int main()
{
   int a[50], n, i;
   cout << "enter size of array:";
   cin >> n;
   for (i = 0; i < n; i++)
   {
      cin >> a[i];
   }
   int largest = 0;
   int secondlargest = 0;
   int thirdlargest = 0;
   // LARGEST ELEMENT
   for (i = 0; i < n; i++)
   {
      if (a[i] > largest)
         largest = a[i];
   }
   // cout<<"largest element = "<<largest<<endl;

   // SECOND LARGEST
   for (i = 0; i < n; i++)
   {
      if (secondlargest < a[i] && a[i] != largest)
         secondlargest = a[i];
   }
   // cout<<"second largest element = "<<secondlargest<<endl;

   // third largest
   for (i = 0; i < n; i++)
   {
      if (thirdlargest < a[i] && a[i] != largest && a[i] != secondlargest)
         thirdlargest = a[i];
   }
   cout << "largest element = " << largest << endl;
   cout << "second largest element = " << secondlargest << endl;
   cout << "third largest element = " << thirdlargest;
}
