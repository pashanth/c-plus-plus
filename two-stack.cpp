#include<iostream>
#include<bits/stdc++.h>

using namespace std;


class twostacks
{
	int *arr;
	int size;
	int top1,top2;
	public:
		twostacks(int n=100)
		{
			size=n;
			arr=new int[n];
			top1=-1;
			top2=size;
			
			
		}
		void push1(int x);
		void push2(int x);
		int pop1();
		int pop2();
		
};

void twostacks :: push1(int x)
{
	if(abs(top1-top2)>=1){
		top1++;
		arr[top1]=x;
		
	}
}

void twostacks :: push2(int x)
{
	if(abs(top1-top2)>=1)
	{
		top2--;
		arr[top2]=x;
		
	}
}
int twostacks :: pop1()
{
	int x=-1;
	if(top1>=0)
	{
		x=arr[top1];
		top1--;
		
	}
	return x;
	
}

int twostacks::pop2()
{
	int x=-1;
	if(top2<size)
	{
		x=arr[top2];
		top2++;
		
	}
	return x;
	
}




int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		twostacks *sq=new twostacks();
		
		int q;
		cin>>q;
		while(q--)
		{
			int stack_no;
			cin>>stack_no;
			int querytype=0;
			cin>>querytype;
			
			
			if(querytype==1)
			{
				int a;
				cin>>a;
				if(stack_no==1)
				sq->push1(a);
				else if(stack_no==2)
				sq->push2(a);
				
				
			}
			else if(querytype==2)
			{
				if(stack_no==1)
				cout<<sq->pop1()<<"";
				else if(stack_no==2)
				cout<<sq->pop2()<<"";
				
			}
		}
		cout<<endl;
		
	}
}
