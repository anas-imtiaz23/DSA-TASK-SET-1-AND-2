#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,num;
	int array[5];
	for(int i=0; i<5; i++)
	{
		cout<<"enter the array"<<i+1<<":";
		cin>>array[i];
	}
	for(int i=0; i<5; i++)
	{
		cout<<array[i];
	}
	cout<<endl;
	cout<<"enter the number for the repetation";
	int count=0;
	cin>>num;
	for(int i=0; i<5; i++)
	{
		if(num==array[i])
		{
		count ++;	}}
	cout<<"the repetation number is"<<count<<endl;
	return 0;}

