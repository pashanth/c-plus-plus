#include<iostream>
#include<stack>
#include<cstring>

#define MAX_LENGTH 50

using namespace std;

char* reverse(char *str,int len);

int main()
{
	
	char str[MAX_LENGTH];
	cin.getline(str,MAX_LENGTH);
	int len=strlen(str);
	char *ch=reverse(str,len);
	cout<<ch;
	cout<<endl;
	
	
	return 0;
	
}

char* reverse(char *S,int len)
{
	stack<char> s;
	
	for(int i=0;i<len;i++)
	{
		s.push(S[i]);
		
	}
	for(int i=0;i<len;i++)
	{
		S[i]=s.top();
		s.pop();
		
	}
	return S;
	
}
