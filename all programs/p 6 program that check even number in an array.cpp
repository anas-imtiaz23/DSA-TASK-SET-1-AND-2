#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int array[5];
	for(int i=0; i<5; i++)
	{
		cout<<"enter the array"<<i+1<<":";
		cin>>array[i];
}
cout<<"the array is"<<":";
for(int i=0; i<5; i++)
{
	cout<<array[i];
}
cout<<endl;
for(int i=0; i<5; i++)
{
	if(array[i]%2==0)
	{
		cout<<"the number is even"<<":";
		cout<<array[i]<<endl;
	}
	else 
	{
		cout<<"the number is odd"<<":";
		cout<<array[i]<<endl;
	}
}
	
	return 0;
}
