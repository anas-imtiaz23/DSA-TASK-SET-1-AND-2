#include<iostream>
using namespace std;
int main()
{
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
	cout<<endl;
	cout<<"unique element of array are";
	int count;
	for(int i=0; i<5; i++)
	{
		count=0;
		for(int j=0; j<5; j++)
		{
			if(i=j)
			{
				if(array[i]!=array[j])
				{
					count++;
				}
			}
		}
		if(count==0)
		{
			cout<<"array[i]"<<"";
		}
	}
}
