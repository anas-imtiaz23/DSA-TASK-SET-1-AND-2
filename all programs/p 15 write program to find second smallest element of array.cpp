#include<iostream>
using namespace std;
int main()
{
	int array[5];
	for(int i=0; i<5; i++)
	{
		cout<<"enter the array"<<i+1;
		cin>>array[i];
	}
	cout<<"the array is";
	for(int i=0; i<5; i++)
	{
		cout<<array[i];
	}
	int smallest;
	for(int i=0; i<5; i++)
	{
		if(smallest>array[i])
		smallest=array[i];
	}
	cout<<"the second smallest element of array is";
	return 0;
}
