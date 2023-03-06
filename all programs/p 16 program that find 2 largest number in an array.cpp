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
	int max=array[0];
	for(int i=0; i<5; i++){
	
	if(max<array[i])
	max=array[i]+1;
}
	cout<<"the second  largest number is"<<max-1;
	return 0;
}
