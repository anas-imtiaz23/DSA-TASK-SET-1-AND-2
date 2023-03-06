#include<iostream>
using namespace std;
int main()
{
	int j;
	int array[5];
	for(int i=0; i<5; i++)
	{
		cout<<"enter the number of elements of array"<<i+1<<":";
		cin>>array[i];
	}
	cout<<"the elements of array are"<<":";
	for(int i=0; i<5; i++)
	{
		cout<<array[i];
	}
	int temp;
	for(int i=0; i<5; i++)
	{
		if(array[i]>array[j])
		{
			temp=array[i];
			array[i]=array[j];
			array[j]=temp;
		}
	}
	int max;
	int i=0; j=4;
	max=array[i]-array[j];
	cout<<"the maximim difference is"<<max<<endl;
}
