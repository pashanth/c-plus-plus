 
 #include<iostream>

using namespace std;


void halfpyramidpattern1(int n)
{
	for(int i=1;i<=n;i++)
	{
		int x=1;
		for(int j=1;j<=i;j++)
		{
			cout<<x;
			x++;
		}
		cout<<endl;
	}
}

void halfpyramidpattern2(int n)
{
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

void halfpyramidpattern3(int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int k=1;k<=n-i;k++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}

void halfpyramidpattern4(int n)
{
	for(int i=n;i>=1;i--)
	{
		for(int k=n-i;k>0;k--)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
}

void halfpyramidpattern5(int n)
{
	int x=1;
	for(int i=1;i<=n;i++)
	{
	
		for(int j=1;j<=i;j++)
		{
			cout<<x;
			x++;
			
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

   // halfpyramidpattern2(num);
		
	cout<<endl;
    cout<<endl;

    halfpyramidpattern3(num);
	cout<<endl;
    cout<<endl;

    halfpyramidpattern4(num);
    
    cout<<endl;
    cout<<endl;

   // halfpyramidpattern5(num);
		
		
  
	return 0;
	
}
