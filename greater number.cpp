#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1, num2,largest;
//jazib
    cout<<"Enter two numbers: ";
    cin >> num1 >> num2;

    largest = num1 > num2 ? (num1 > num2 ? num1 : num2) : (num2 > num1 ? num2 : num1) ;
    
    cout << largest << " is the largest number.";

    return 0;
}
