#include<iostream>
using namespace std;
int main()
{
	int arr1[5]={1,2,3,4,5};
	int arr2[5]={1,2,5,7,8};
	bool arraysequal=true;
	for(int i=0; i<5; i++)
	{
		if(arr1[i] !=arr2[i])
		{
			arraysequal=false;
			break;
		}
	}
	if(arraysequal==true)
	cout<<"two arrays are equal";
	else
	cout<<"two arrays are not equal";
}
