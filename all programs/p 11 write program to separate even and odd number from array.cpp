#include<iostream>
using namespace std;
int main()
{
	int i,even,odd;
	int array[5];
	for(int i=0; i<5; i++)
	{
		cout<<"enter the element of array"<<i+1<<":";
		cin>>array[i];
	}
	cout<<"the element of array are";
	for(int i=0; i<5; i++)
	{
		cout<<array[i];
	}
	cout<<endl;
	for(int i=0; i<5; i++)
	{
		
	
	if(array[i]%2==0)
	{
		cout<<"the number is even"<<even;
	}
	else 
	{
		cout<<"the numbe is odd"<<odd;
	}
}
}
