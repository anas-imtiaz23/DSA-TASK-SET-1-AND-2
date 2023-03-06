#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	for(int i=0; i<5; i++)
	{
		cout<<"enter values"<<i+1<<":";
		cin>>arr[i];
	}
	cout<<"the values entered are"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<arr[i];
	}
	cout<<endl;
	for(int i=0; i<5; i++){
		for(int j=i+1; j<5; j++)
		{
			if(arr[i]>arr[j])
			{
				int temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"the acending order is"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<arr[i];
	}
	return 0;
}
