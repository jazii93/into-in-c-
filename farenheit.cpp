#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 float cel, far;
 //m jazib
  cout<<"Enter temp. in Celsius: ";
  cin>>cel;
   far = cel * 9/5 + 32;
  cout<<"Temp. in Fahrenheit: "<<far;
 getch();
 return 0;
}

