#include<iostream>
using namespace std;


class complexnumber{
	private:
		int real;
		float imaginary;
	public:
		complexnumber(){
			
		}
		complexnumber(int r,float i)
		{
			real=r;
			imaginary=i;
			
		}
		void displaydata()
		{
			cout<<"complex number is:"<<real<<"+"<<imaginary<<"i"<<endl<<endl;
			
		}
		int getrealpart()
		{
			
			return real;
		}
		float getimaginarypart()
		{
			return imaginary;
		}
};

complexnumber add2number(complexnumber n1,complexnumber n2)
{
	int r;
	float i;
	r=n1.getrealpart()+n2.getrealpart();
	i=n1.getimaginarypart()+n2.getimaginarypart();
	complexnumber temp(r,i);
	return temp;
	
}

int main()
{
	complexnumber comp1(5,4) ,comp2(2,3),comp3;
	comp1.displaydata();
	comp2.displaydata();
	
	cout<<"addition on comp1 and comp2"<<endl;
	comp3=add2number(comp1,comp2);
	comp3.displaydata();
	
	
	cout<<"pointer to object"<<endl<<endl;
	complexnumber *ptr1;
	ptr1=&comp3;
	ptr1->displaydata();
	
	
	return 0;
}
