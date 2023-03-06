#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the value of the first number :";
	cin>>a;
	cout<<"enter the value of the second integer :";
	cin>>b;
	//before swapping
	cout<<"the value of the first number"<<":"<<a<<endl;
	cout<<"the value of the second number"<<":"<<b<<endl;
	//after swapping
	//if value of the a is  4 and b is 5 the a+b=9
	//a=a-b
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"the value of the first number :"<<a<<endl;
	cout<<"the value of the second number :"<<b<<endl;
}
