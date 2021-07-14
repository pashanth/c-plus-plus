#include<iostream>

using namespace std;


class Myclass{
	private:
		int x;
		static int count;
	public:
		
	
		
		Myclass(){
			count++;
			
		}
		static int getcount()
		{
			return count;
			
		}
};


 int Myclass::count=0;


int main()
{
	cout<<"initial count:"<<Myclass::getcount()<<endl;
	Myclass obj1,obj2,obj3,obj4;
	cout<<"count after one object:"<<Myclass::getcount()<<endl;
}
