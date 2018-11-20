#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float a,b,c,d,f,sum,percentage,total;
	cout<<"enter marks of five subject"<<endl;
	cin>>a>>b>>c>>d>>f;
	cout<<"enter total marks";
	cin>>total;
	sum=a+b+c+d+f;
	percentage=sum*100/total;
	cout<<"sum is="<<sum<<endl;
	cout<<"percentage"<<percentage;

getch();
return 0;
}
