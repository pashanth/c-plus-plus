#include<iostream>

using namespace std;

class queue{
	private:
		int front;
		int rear;
		int arr[5];
		
	public:
		queue(){
			front=-1;
			rear=-1;
			for(int i=0;i<5;i++)
			{
				arr[i]=0;
				
			}
		}
		
		bool isEmpty(){
			if(front==-1 && rear==-1)
			  return true;
			else
			   return false;
			   
		}
		
		bool isFull(){
			if(rear==4)
			 return true;
			else
			  return false;
			  
		}
		
		void enqueue(int val){
			if(isFull()){
				cout<<"queue full"<<endl;
				return;
				
			}
			else if(isEmpty())
			{
				rear=0;
				front=0;
				arr[rear]=val;
				
			}
			else
			{
				rear++;
				arr[rear]=val;
				
			}
			
			
		}
		
		int dequeue()
		{
			int x=0;
			if(isEmpty())
			{
				cout<<"queue id empty"<<endl;
				return x;
				
			}
			else if(rear==front)
			{
				x=arr[rear];
				rear=-1;
				front=-1;
				return x;
				
			}
			else{
				
				x=arr[front];
				arr[front];
				front++;
				return x;
			}
			
		}
		
		int count(){
			return (rear-front+1);
		}
		void display(){
			cout<<"All values in the queue are-"<<endl;
			for(int i=0;i<5;i++)
			{
				cout<<arr[i]<<" ";
			}
		}
};


int main(){
	queue q1;
	int value,option;
	
	do{
		cout<<"what operation do  you want to perform?Select option number.enter 0 to exit"<<endl;
		cout<<"1.enqueue()"<<endl;
		cout<<"2.dequeue()"<<endl;
		cout<<"3.isEmpty()"<<endl;
		cout<<"4.isFull()"<<endl;
		cout<<"5.count()"<<endl;
		cout<<"6.display()"<<endl;
		cout<<"7.clear screen"<<endl;
		
		cin>>option;
		
		switch(option)
		{
			case 0:
				break;
			case 1:
				cout<<"enqueue operation-enter an item to enqueue in the queue"<<endl;
				cin>>value;
				q1.enqueue(value);
				break;
			case 2:
				cout<<"dequeue operation-dequeued value:"<<q1.dequeue()<<endl;
				break;
			case 3:
				if(q1.isEmpty())
				  cout<<"queue is empty"<<endl;
				else
				cout<<"queue is not empty<<endl";
				break;
			case 4:
				if(q1.isFull())
				  cout<<"queue is full"<<endl;
				else
				  cout<<"queue is not full"<<endl;
				break;
			case 5:
				cout<<"count operation-count of items in queue:"<<q1.count()<<endl;
				break;
			case 6:
				cout<<"dispaly function called-"<<endl;
				q1.display();
				break;
			case 7:
				system("cls");
				break;
			default:
				cout<<"enter proper option number"<<endl;
				
		}
		
	}while(option!=0);
	return 0;
}
