#include<iostream>

using namespace std;


class Animal{
	public:
		void makesound()
		{
			cout<<"animal sound";
			
		}
		
};


class Dog:public Animal{
	public:
		void makesound()
		{
			cout<<"dog barks";
			
		}
};

class Cat:public Animal
{
	public:
		void makesound(){
			cout<<"cat meow";
			
		}
};


int main(){

  Animal a1;
  a1.makesound();
  cout<<endl;
  Dog d1;
  d1.makesound();
  cout<<endl;
  Cat c1;
  c1.makesound();
  
	return 0;
	
}
