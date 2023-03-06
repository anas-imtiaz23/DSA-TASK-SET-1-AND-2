#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i;
	int array[5];
	for(int i=0; i<5; i++)
	{
		cout<<"enter the array"<<endl;
		cin>>array[i];
	}
	cout<<"the array elements are"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<array[i];
	}
	int max=array[0];
	for(int i=0; i<5; i++)
	{
		if(max<array[i])
		max=array[i];
	}
	cout<<"the maximum element of array are"<<max<<endl;
	
	return 0;
}
