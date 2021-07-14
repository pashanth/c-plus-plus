#include<iostream>

using namespace std;


class Myclass{
	public:
		int x;
		static int count;
		
		Myclass(){
			count++;
			
		}
};


 int Myclass::count=0;


int main()
{
	cout<<"initial count:"<<Myclass::count<<endl;
	Myclass obj1,obj2,obj3,obj4;
	cout<<"count after one object:"<<Myclass::count<<endl;
}
