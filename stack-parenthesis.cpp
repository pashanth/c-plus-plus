#include<iostream>
#include<string>


using namespace std;


const int N = 2e5;
char stack[N];
int top=-1;

void push(char x)
{
    if(top==N-1) cout<<"can't add values storage full";
    stack[++top]=x;
    
}
int pop()
{
    if(top==-1) return -N;
    top--;
    return stack[top+1];
}

int main() {
	//code
	int t=1;
	cin>>t;
	while(t--)
	{
	    char s[N];
	    cin>>s;
	    int l=0;
	    for(int i=0;i<N;i++)
	    {
	        if(s[i]=='\0')
	        break;
	    
	        if(s[i]=='{' || s[i]=='(' || s[i]=='[') push(s[i]);
	        else if(top==-1) 
	        {
	            l=1;
	            break;
	        }
	        else if(s[i]=='}')
	        {
	            if(stack[top]=='{')
	            {
	                pop();
	            }
	            else
	            {
	                l=1;
	                break;
	            }
	        }
	        else if(s[i]==')')
	        {
	            if(stack[top]=='(')
	            {
	                pop();
	            }
	            else
	            {
	                l=1;
	                break;
	            }
	        }
	        else if(s[i]==']')
	        {
	            if(stack[top]=='[')
	            {
	                pop();
	            }
	            else
	            {
	                l=1;
	                break;
	            }
	        }
	    }
	    if(top>-1) l=1;
	    if(l) cout<<"not balanced";
	    else cout<<"balanced";
	    top=-1;
	    cout<<"\n";
	}
	return 0;
}
