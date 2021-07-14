  
 #include<iostream>

using namespace std;



void hallowdiamond(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<(2*n);j++)
		{
			if(i+j<=n-1)   //upper left triangle
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
			
			if((i+n)<=j) //upper right triangle
			{
				cout<<"*";
				 
			}
			else
			
			{
				cout<<" ";
				
			}
			
		}
		cout<<endl;
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<(2*n);j++)
		{
			if(i>=j)   //bottom left triangle
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
			
			if(i>=(2*n-1)-j) //bottom right triangle
			{
				cout<<"*";
				
			}
			else
			
			{
				cout<<" ";
				
			}
			
		}
		cout<<endl;
	}
	
}



int main()
{
	int num;
	cout<<"enter number of levels of the pattern :"<<endl;
	cin>>num;
//	halfpyramidpattern1(num);

    cout<<endl;
    cout<<endl;


     hallowdiamond(num);
		
		
  
	return 0;
	
}
