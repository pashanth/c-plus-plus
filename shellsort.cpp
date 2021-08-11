#include <iostream>
using namespace std;

void shellsort(int arr[],int n)
{
	
	
	for(int gap=n/2;gap>0;gap/=2)
	{
		for(int j=gap;j<n;j+=1)
		{
			int temp=arr[j];
			int i=0;
			
			for(i=j;(i>=gap)&&(arr[i-gap]>temp);i-=gap)
			{
				int x=arr[i];
			    arr[i]=arr[i-gap];
			    arr[i-gap]=x;
				
			}
		
			
			
			
		}
	}
}





int main()
{
	int n;
	cout<<"enter the size of the array:"<<endl;
	cin>>n;
	int arr1[n];
	
	
	cout<<"enter "<<n<<" integer in any order"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr1[i];
		
	}
	cout<<endl<<"before sorting :"<<endl;
	
	for(int i=0;i<n;i++)
	{
		cout<<arr1[i]<<" ";
		
	}
	cout<<endl<<endl<<"shell sort"<<endl;
	
	shellsort(arr1,n);
	
	cout<<"after sorting :"<<endl;
	
	for(int i=0;i<n;i++)
	{
		cout<<arr1[i]<<" ";
		
	}
	
	return 0;
	
}
