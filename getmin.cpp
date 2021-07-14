#include<iostream>
#include<stack>

using namespace std;


void push(stack <int>&s, int a);

bool isfull(stack<int>&s,int n);

bool isempty(stack<int>&s);

int pop(stack<int>&s);

int getmin(stack<int>&s);


stack <int>s;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,a;
		cin>>n;
		while(!isempty(s))
		{
			pop(s);
			
		}
		while(!isfull(s,n))
		{
			cin>>a;
			push(s,a);
			
		}
		cout<<getmin(s)<<endl;
		
	}
	
}

void push(stack<int>&s,int a)
{
	s.push(a);
	
}

bool isfull(stack<int>&s,int n)
{
	if(s.size()==n)
	{
		return true;
		
	}
	return false;
	
}


bool isempty(stack<int>&s)
{
	return s.empty();
	
	
}

int pop(stack<int>&s)
{
	int temp=s.top();
	s.pop();
	return temp;
	
	
}

int getmin(stack<int>&s)
{
	stack<int>temp=s;
	int min=s.top();
		while(!temp.empty())
		{
			if(temp.top()<min)
			{
				min=temp.top();
				
			}
			temp.pop();
			
		}
		return min;
		
}



