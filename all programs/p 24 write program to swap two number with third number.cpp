#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"enter the first number :";
	cin>>num1;
	cout<<"enter the second number :";
	cin>>num2;
	//before swapping 
	cout<<"the value of the first number is :"<<num1<<endl;
	cout<<"the value of the second number is :"<<num2<<endl;
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
	//after swapping
	cout<<"the value of the first number is :"<<num1<<endl;
	cout<<"the value of the second number is :"<<num2<<endl;
	
}
