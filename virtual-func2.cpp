#include<iostream>

using namespace std;

class Animal
{
	public:
	    void eat()
		{
			cout<<"i am eating generic food";
		}
};

class Cat:public Animal
{
	public:
		void eat()
		{
			cout<<"i am eating cat food";
			
		}
};

class Dog:public Animal
{
	public:
		void eat()
		{
			cout<<"i am eating dog food";
			
		}
};

void function1(Animal *xyz)
{
	xyz->eat();
	
}


int main()
{
	Animal *ptr;
	
	Cat catobj;
	Dog dogobj;
	
	ptr=&catobj;
	
	function1(ptr);
	
	
}
