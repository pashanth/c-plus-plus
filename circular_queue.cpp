#include<iostream>

using namespace std;

class circularqueue {
	private:
		int front;
		int arr[5];
		int rear;
		int itemcount;
		
		
	public:
		circularqueue(){
			itemcount=0;
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
			if((rear+1)%5==front)
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
			else{
				rear=(rear+1)%5;
				arr[rear]=val;
				
			}
			itemcount++;
		}
		int dequeue(){
			int x=0;
			if(isEmpty()){
				cout<<"queue is Empty"<<endl;
				return x;
			}else if(rear==front){
				x=arr[rear];
				rear=-1;
				front=-1;
				itemcount--;
				return x;
			}else
			{
				cout<<"front value:"<<front<<endl;
				x=arr[front];
				arr[front]=0;
				front=O(front+1)%5;
				itemcount--;
				return x;
			}
		}
		int count()
		{
			return(itemcount--);
		}
		void display(){
			cout<<"all value in the queue are-"<<endl;
			for(int i=0;i<5;i++)
			{
				cout<<arr[i]<<" ";
				
			}
		}
};

int main()
{
	circularqueue q1;
	int value,option;
	
	do
	{
		cout<<"what operation do you want to perform? select option number.enter 0to exit."<<endl;
		cout<<"1.enqueue()"<<endl;
		cout<<"2.dequeue()"<<endl;
		cout<<"3.isEmpty()"<<endl;
		cout<<"4.isFull()"<<endl;
		cout<<"5.cout()"<<endl;
		cout<<"6.display()"<<endl;
		cout<<"7.clear screen"<<endl;
		cin>>option;
		
		switch (option){
			case 0:
				break;
			case 1:
				cout<<"enque operation -enter an item to enqueue in the queue"<<endl;
				cin>>value;
				q1.enqueue(value);
				break;
			case 2:
				cout<<"dequeue operation-dequeued value:"<<q1.dequeue()<<endl;
				break;
			case 3:
			    if(q1.isEmpty())
			      cout<<" queue is empty"<<endl;
			    else
			      cout<<"queue is not empty"<<endl;
		        break;
		    case 4:
		    	if(q1.isFull())
		    	   cout<<"queue is full"<<endl;
		    	else
		    	   cout<<"queue is not full";
		    	break;
		    case 5:
		    	cout<<"count operation-count of items in queue:"<<q1.count()<<endl;
		    	break;
		    case 6:
		    	cout<<"display function called-"<<endl;
		    	q1.display();
		    	break;
		    case 7:
		    	system("cls");
		    	break;
		    default:
		    	cout<<"enter proper option number"<<endl;
		    	
		    	
			       
		}
		
	}while(option!=0)
	return 0;
	
}
