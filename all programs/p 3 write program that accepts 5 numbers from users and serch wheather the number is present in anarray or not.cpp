#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
		int i,search;
	int array[5];
	for(int i=0; i<5; i++)
	{
		cout<<"enter the elements of array"<<i+1<<":"<<endl;
		cin>>array[i];
	}
	cout<<"the value of array are";
	cout<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<array[i];
	}
	cout<<endl;
	cout<<"enter the number for search";
	cout<<endl;
	cin>>search;
	for(int i=0; i<5; i++)
	{
		if(search=array[i])
		{
			cout<<"found";
		}
	else
	{
		cout<<"not found";
	}
	
	
	return 0;
}}
