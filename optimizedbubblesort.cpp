#include<iostream>

using namespace std;


void optimizedbubblesort(int a[])
{
	int rounds=0;
	
	 for(int i=0;i<5;i++)
	 {
	 	rounds++;
	 	int flag=false;
	 	for(int j=0;j<5-i-1;j++)
	 	{
	 	    if(a[j]>a[j+1])
			 {
			 	falg=true;
			   int temp =a[j];
			   a[j]=a[j+1];
			   a[j+1]=temp;
			   
			    	
			 }	
		}
		if(flag==false)
		{
			break;
		}
	 }
	 
	 
	 cout<<"no of rounds:"<<rounds<<endl;
	 
	 
	 
}



int main()
{
	int myarray[5];
	int i;
	cout<<"enter 5 integers in any order:"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>myarray[i];
	}
	cout<<"before sorting"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<myarray[i]<<" ";
	}
	 
	 optimizedbubblesort(myarray);
	 
	 cout<<"after sorting"<<endl;
	 for(i=0;i<5;i++)
	 {
	 	cout<<myarray[i]<<" ";
	 	
	 }
	
	return 0;
	
}
