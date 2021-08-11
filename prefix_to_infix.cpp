#include<iostream>
#include<stack>

using namespace std;

bool isOperand(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return true;
    }
    else {
        return false;
    }
}


string prefixtoinfix(string prefix)
{
	stack<string> s;
	for(int i=prefix.length()-1;i>=0;i--)
	{
		if(isOperand(prefix[i]))
		{
			string op(1,prefix[i]);
			
			s.push(op);
		}
		
		else
		{
			string op1=s.top();
			s.pop();
			string op2=s.top();
			s.pop();
			s.push("("+op1+prefix[i]+op2+")");
		}
	}
	
	return s.top();
}



int main()
{
	string infix,prefix;
	cout<<"enter a prefix expression:"<<endl;
	cin>>prefix;
	cout<<"prefix expression:"<<prefix<<endl;
	infix=prefixtoinfix(prefix);
	cout<<endl<<"infix expression:"<<infix;
	
	return 0;
}
