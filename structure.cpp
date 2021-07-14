#include<iostream>
using namespace std;


struct Person{
	char name[100];
	int age;
	double salary;
	
};

int main()
{
	Person p1;
	cout<<"Person details"<<endl<<"Enter Person Name:"<<endl;
	cin.getline(p1.name,100);
	cout<<"Enter age"<<endl;
	cin>>p1.age;
	cout<<"enter salary"<<endl;
	cin>>p1.salary;
	
	cout<<endl<<"person details are as follows:"<<endl;
	cout<<"person name:"<<p1.name<<endl;
	cout<<"person age:"<<p1.age<<endl;
	cout<<"person salary:"<<p1.salary<<endl;
	
	
	return 0;
	
}
