#include<iostream>


using namespace std;


class Shape{
	protected:
		int width;
		int height;
		
	public:
		void setwidth(int w){
			width=w;
			
		}
		
		void setheight(int h){
			height=h;
			
		}
		
		
};


class Rectangle:public Shape{
	public:
		int getArea(){
			return(width * height);
			
		}
	
};


int main(){
	Rectangle React;
	
	React.setwidth(5);
	React.setheight(7);
	
	
	cout<<"total area:"<<React.getArea()<<endl;
	
	return 0;
	
}

