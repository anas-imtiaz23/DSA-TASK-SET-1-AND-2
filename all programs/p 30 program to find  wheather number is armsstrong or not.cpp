#include<iostream>
using namespace std;
int main()
{
	int n,o,rem,num=0;
	cout<<"enter the number"<<endl;
	cin>>n;
	o=n;
	while(o!=0)
	{
		rem=o%10;
		num=num+rem*rem*rem;
		o=o/10;
		
	}
	if(n==num)
	{
		cout<<"armsstrong number";
	}
	else
	cout<<"not armsstrong no";
	return 0;
}
