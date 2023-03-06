#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter the number";
	cin>>num;
	switch(num)
	{
		case 1:
			{
				cout<<"question 1 program to separate even and odd number";
		cout<<endl;
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
		
	}}
	case 2:
		{
			cout<<"question 2 the program to count even and odd number";
			cout<<endl;
			int n,odd=0,even=0;
	cout<<"enter the size of array :";
	cout<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter the element of array:";
	for(int i=0; i<5; i++)
	{
		cin>>arr[i];
	}
	for(int i=0; i<n; i++)
	{
		if(arr[i]%2==0)
		{
			even++;
		}
		else{
			odd++;
		}
	}
	cout<<endl;
	cout<<"the total even number are"<<even;
	cout<<endl;
	cout<<"the total odd number are"<<odd;
			
		}
		case 3:
			{
				cout<<"question 3 sort element of array in ascending order";
				cout<<endl;
				int arr[5];
	for(int i=0; i<5; i++)
	{
		cout<<"enter values"<<i+1<<":";
		cin>>arr[i];
	}
	cout<<"the values entered are"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<arr[i];
	}
	cout<<endl;
	for(int i=0; i<5; i++){
		for(int j=i+1; j<5; j++)
		{
			if(arr[i]>arr[j])
			{
				int temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"the acending order is"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<arr[i];
				
			}
			case 4:
				{
					cout<<"question program of decending order of array";
					cout<<endl;
						int arr[5];
	for(int i=0; i<5; i++)
	{
		cout<<"enter values"<<i+1<<":";
		cin>>arr[i];
	}
	cout<<"the values entered are"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<arr[i];
	}
	cout<<endl;
	for(int i=0; i<5; i++){
		for(int j=i+1; j<5; j++)
		{
			if(arr[i]<arr[j])
			{
				int temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"the decending order array is"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<arr[i];
				}
				case 5:
					{
						cout<<"question to find second smallest element of array";
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
	min=array[i]-1;
}
	cout<<"the second smallest number is"<<min+1;
					}
					case 6:
						{
							cout<<"question the program to find second largest element of array";
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
	int max=array[0];
	for(int i=0; i<5; i++){
	
	if(max<array[i])
	max=array[i]+1;
}
	cout<<"the second  largest number is"<<max-1;
							
						}}
						case 7:
							{
								cout<<"question to check if the two arrays are equal or not";
								cout<<endl;
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
							case 8:
								{
									cout<<"question 8 to merge two unsorted array of different lenght";
									cout<<endl;
									int array1[] = {1, 2, 3, 4};
    int array2[] = {5, 6, 7, 8, 9, 10};

    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int size3 = size1 + size2;

    int mergedArray[size3];

    for (int i = 0; i < size1; i++)
    {
        mergedArray[i] = array1[i];
    }

    for (int i = 0; i < size2; i++)
    {
        mergedArray[size1 + i] = array2[i];
    }

    for (int i = 0; i < size3; i++)
    {
        std::cout << mergedArray[i] << " ";
    }}
    case 9:
    	{
    		cout<<"question to find maximum differencee between array element";
    		cout<<endl;
    			int arr[5];
	cout << "Enter the 'Array'" << endl;
	cout << "\n";
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter value of " << i + 1 << " : ";
		cin >> arr[i];

	}
	cout << "\n Values of array are = ";
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << "  ";
	}
	
	int temp;
	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "\n";
	int Max;
	int i=0,j=4;
	Max = arr[j] - arr[i];
	cout << "\n Maximum difference is : '" << Max << "'" << endl;
    		
		}
									
								}
		
	}}}
