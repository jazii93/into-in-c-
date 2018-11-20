#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a,b;
	cout<<"Before swap"<<a;
	cout<<"before swap"<<b;
	cin>>a;
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"after swap"<<a;
	cout<<"after swap"<<b;
getch();
return 0;
}
