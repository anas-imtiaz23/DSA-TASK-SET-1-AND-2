#include<iostream>
using namespace std;
int main()
{
	int num,rev=0,rem;
	cout<<"enter an integer ::";
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	cout<<"the reversed number is"<<rev<<endl;
	return 0;
}
