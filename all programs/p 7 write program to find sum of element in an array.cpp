#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int array[5];
	for(int i=0; i<5; i++)
	{
		cout<<"enter the elements of array"<<i+1<<":"<<endl;
		cin>>array[i];
	}
	cout<<"the element of array are";
	for(int i=0; i<5; i++)
	{
		cout<<array[i];
	}
	for(int i=0; i<5; i++)
	{
		sum+=array[i];
	}
	cout<<endl;
	cout<<"sum"<<sum<<endl;
}
