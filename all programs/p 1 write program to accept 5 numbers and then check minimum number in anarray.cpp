#include<iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int array[5];
	for(int i=0; i<5; i++)
	{
		cout<<"enter the array"<<i+1<<":";
		cin>>array[i];
	}
	cout<<"the value of array is";
	for(int i=0; i<5; i++)
	{
		cout<<array[i];
	}
	cout<<endl;
	int min=array[0];
	for(int i=0; i<5; i++){
	
	if(min>array[i])
	min=array[i];
}
	cout<<"the minimum number is"<<min;
	return 0;
}
