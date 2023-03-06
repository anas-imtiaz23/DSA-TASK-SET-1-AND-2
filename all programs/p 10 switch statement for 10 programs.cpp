#include<iostream>
using namespace std;
int main()
{ int num;
cout<<"enter the number";
cin>>num;
switch(num)
{
	case 1:
		{
			cout<<"question no 1 program of minimum number"<<endl;
			cout<<endl;
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
	cout<<"the minimum number is"<<min;}
	case 2:
	{
		cin>>num;
		cout<<"the program of the maximum number is";
		cout<<endl;
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
	}
	case 3:
		{
			cin>>num;
			cout<<"queation no 3 search the number of program";
			cout<<endl;
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
		cout<<"not found";	}}
		case 4:
			{
				cin>>num;
			cout<<"question no 4 search the number and how many time it is present";
			cout<<endl;
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
			
			}
			case 5:
			{
				cin>>num;
				cout<<"question no 5 to check odd numbers";
				cout<<endl;
					int array[5];
	for(int i=0; i<5; i++)
	{
		cout<<"enter the array"<<i+1<<":";
		cin>>array[i];
}
cout<<"the array is";
for(int i=0; i<5; i++)
{
	cout<<array[i];
}
cout<<endl;
cout<<"the list of odd number :"<<":"<<endl;
for(int i=0; i<5; i++)
{
	if(array[i]%2!=0)
	{
		cout<<array[i]<<":";
				
			}}
			case 6:
				{
					cout<<"question to check even number of element";
					cout<<endl;
					int array[5];
	for(int i=0; i<5; i++)
	{
		cout<<"enter the array"<<i+1<<":";
		cin>>array[i];
}
cout<<"the array is";
for(int i=0; i<5; i++)
{
	cout<<array[i];
}
cout<<endl;
cout<<"the list of even number :";
for(int i=0; i<5; i++)
{
	if(array[i]%2==0)
	{
		cout<<array[i]<<":";
					
				}}}
				case 7:
					{
						cin>>num;
						cout<<"question no 7 to add elements of arrays in an array";
						cout<<endl;
						int sum=0;
	int array[5];
	for(int i=0; i<5; i++)
	{
		cout<<"enter the elements of array"<<i+1<<":"<<endl;
		cin>>array[i];
	}
	cout<<"the element of array are";
	for(int i=0; i<5; i++)
	{
		cout<<array[i];
	}
	for(int i=0; i<5; i++)
	{
		sum+=array[i];
	}
	cout<<endl;
	cout<<"sum"<<sum<<endl;
						
					}
					case 8:
						{
							cout<<"question 8 to reverse element of array";
							cout<<endl;
								int reverse;
	int array[5];
	for(int i=0; i<5; i++)
	{
		cout<<"enter the elements of array"<<i+1<<":"<<endl;
		cin>>array[i];
	}
	cout<<"the element of array are";
	for(int i=0; i<5; i++)
	{
		cout<<array[i];
	}
	cout<<"the reverse of the array is";
	for(int i=5; i>0; i--)
	{
		cout<<array[i]-1;
							
						}
						case 9:
							{
								cout<<"question 9 to print unique element of array";
								cout<<endl;
									int arr[10];
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter value of " << i + 1 << " : ";
		cin >> arr[i];

	}
	cout << "\n Values of array are : ";
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << "\n";

	//Printing Unique elements
	cout << "\n Unique elements are ";
	int count;
	for (int i = 0; i < 10; i++)
	{
		count = 0;
		for (int j = 0; j < 10; j++)
		{
			if (i != j)
			{
				if (arr[i] == arr[j])
				{
					count++;
				}
			}
		}
		if (count == 0)
		{
			cout << "'"<<arr[i] << "'       ";
								
							}
		
	}}}}}}}
