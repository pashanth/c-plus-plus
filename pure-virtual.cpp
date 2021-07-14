#include<iostream>

using namespace std;

class Shape
{
   public:
   virtual void getArea()=0; //pure virtual function
   	
};
class Circle:public Shape{
	
	public:
		void getArea()
		{
			cout<<"enter circle radius"<<endl;
			int r;
			cin>>r;
			cout<<"area of circle is:"<<(3.14*r*r);
			 
			 
		}
};



int main()
{
	Circle c1;
	c1.getArea();
}
