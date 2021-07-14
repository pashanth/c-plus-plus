#include<iostream>
#include<algorithm>

using namespace std;


//class Solution{
//	public:
//		
//		int kthsmall(int arr[],int k,int n)
//		{
//			sort(arr,arr+n);
//			return arr[k-1];
//		}
//		
//		int kthlarge(int arr[],int k,int n)
//		
//		{
//			sort(arr,arr+n);
//			return arr[-k];
//		}
//		
//};


int main()
{
	

int n;
cin>>n;

int a[n];


for(int i=0;i<n;i++)
{
	cin>>a[i];
	
}

int k;
cout<<"enter k value"<<endl;
cin>>k;

sort(a,a+n);



cout<<k<<"small element is:"<<endl;

cout<<a[k-1]<<endl;

sort(a,a+n,greater<int>());

cout<<k<<"large element is:"<<endl;
cout<<a[k-1]<<endl;

}


