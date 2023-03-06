#include<iostream>
using namespace std;
int main()
{
	int reverse;
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
	cout<<"the reverse of the array is";
	for(int i=5; i>0; i--)
	{
		cout<<array[i]-1;
	}
	return 0;
	
}
