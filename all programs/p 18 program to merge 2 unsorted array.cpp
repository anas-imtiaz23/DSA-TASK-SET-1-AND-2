#include<iostream>
using namespace std;
int main()
{
	int size=5;
	int arr1[size];
	int arr2[size];
	int merge[size=5];
	cout<<"enter elements of first array"<<endl;
	for(int i=0; i<5; i++)
	{
		cin>>arr1[i];
	}
	cout<<"entre the element of second array";
	for(int i=0; i<size; i++)
	{
		cin>>arr2[i];
	}
	for(int i=0; i<size; i++)
	{
		merge[i]=arr1[i];
	}
	for(int i=0; i<size; i++)
	{
		merge[size + i]=arr2[i];
	}
	cout<<"merge array is"<<endl;
	for(int i=0; i<size * 2; i++)
	{
		cout<<merge[i]<<"";
	}
	return 0;
}
