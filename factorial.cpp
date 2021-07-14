#include<iostream>
using namespace std;


int main()
{
	cout<<"enter a number to calculate its factorial"<<endl;
	int x,fact;
	cin>>x;
	
	fact=x;
	
	
	while(x>1)
	{
		x--;
		fact=fact*x;
		
	}
	
	cout<<"factorial value:"<<fact;
    return 0;
	
	
	
}
