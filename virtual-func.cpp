#include<iostream>

using namespace std;


class MyBase{
    
    public:
    	void show()
    	{
    		cout<<"Base class show function called"<<endl;
    		
		}
		virtual void print()
		{
			cout<<"Base class print function called"<<endl;
			
		}

   
};

class MyDerived : public MyBase{
	 public:
    	void show()
    	{
    		cout<<"derived class show function called"<<endl;
    		
		}
		virtual void print()
		{
			cout<<"derived class print function called"<<endl;
			
		}
};

int main()
{
	MyBase *baseptr;
	MyDerived derivedObj;
	
	baseptr=&derivedObj;
	
	baseptr->print();
	baseptr->show();
	
}
