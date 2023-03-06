#include<iostream>
using namespace std;
int main()
{
	int n,odd=0,even=0;
	cout<<"enter the size of array :";
	cout<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the element of array:";
	for(int i=0; i<5; i++)
	{
		cin>>arr[i];
	}
	for(int i=0; i<n; i++)
	{
		if(arr[i]%2==0)
		{
			even++;
		}
		else{
			odd++;
		}
	}
	cout<<endl;
	cout<<"the total even number are"<<even;
	cout<<endl;
	cout<<"the total odd number are"<<odd;
}
