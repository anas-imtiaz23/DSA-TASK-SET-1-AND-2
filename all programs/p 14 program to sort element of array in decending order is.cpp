#include<iostream>
using namespace std;
void selectionsort(int array[])
{
	for(int i=0; i<4; i++)
	{
		int min=i;
		for(int j=i+1; j<5; j++)
		{
			if(array[j]>array[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			int temp=array[min];
			array[min]=array[i];
			array[i]=temp;
		}
	}
}
int main()
{
	int array[5];
	cout<<"enter the element of array :"<<endl;
	for(int i=0; i<5; i++)
	{
		cin>>array[i];
	}
	cout<<"the array is :"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<array[i]<<"";
	}
	cout<<endl;
	selectionsort(array);
	cout<<"array in decinding order :"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<array[i]<<"";
	}
	return 0;
}
