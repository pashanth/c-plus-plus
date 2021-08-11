#include<iostream>


using namespace std;


class Node{
	public:
		int key;
		int data;
		Node * next;
		
		
	Node()
	{
		key=0;
		data=0;
		next=NULL;
		
	}
	
	Node(int k,int d)
	{
		key=k;
		data=d;
		next=NULL;
		
	}
	
		
};


class Queue
{
	public:
		Node * front;
		Node * rear;
		
	Queue()
	{
		front=NULL;
		rear=NULL;
		
	}
	bool isempty()
	{
		if(front==NULL && rear==NULL)
		{
			return true;
			
		}
		else
		{
			return false;
			
		}
	}
	
	bool checkifnodeexist(Node * n)
	{
		Node * temp=front;
		bool exit=false;
		while(temp!=NULL)
		{
			if(temp->key==n->key)
			{
				exit=true;
				break;
				
			}
			temp=temp->next;

		}
		return exit;
	}
	
	void enqueue(Node * n)
	{
		if(isempty())
		{
			front=n;
			rear=n;
			cout<<"node enqueued successfully"<<endl;
			
			
		}
		else  if(checkifnodeexist(n))
		{
			cout<<"node already exist with this key value"<<"enter different key value"<<endl;
			
		}
		else
		{
			rear->next=n;
			rear=n;
			
			cout<<"node enqueued successfully"<<endl;
			
		}
	}
	
	Node * dequeue()
	{
		Node * temp=NULL;
		if(isempty())
		{
			cout<<"stack underflow"<<endl;
			return NULL;
			
		}
		else
		{
			if(front=rear)
			{
				temp=front;
				front=NULL;
				rear=NULL;
				return temp;
				
			}
			else
			{
				temp=front;
				front=front->next;
				return temp;
				
			}
		}
	}
	
	int count()
	{
		int count=0;
		Node * temp=front;
		
		while(temp!=NULL)
		{
			count++;
			temp=temp->next;
			
		}
		return count;
		
	}
	
	void display()
	{
		if(isempty())
		{
			cout<<"queue is empty"<<endl;
			
		}
		else
		{
			cout<<"all values in the queue are:"<<endl;
			Node * temp=front;
			while(temp!=NULL)
			{
				cout<<"("<<temp->key<<","<<temp->data<<")"<<"->";
				temp=temp->next;
				
			}
			cout<<endl;
			
		}
	}
	
	
};




int main()
{
	Queue q;
	
	int option,key,data;
	
	
	do
	{
		cout<<"what operation do you want to perform?"<<"select option number enter 0 to exit"<<endl;
		cout<<"1.enqueue()"<<endl;
		cout<<"2.dequeue()"<<endl;
		cout<<"3.isempty()"<<endl;
		cout<<"4.count()"<<endl;
		cout<<"5.display()"<<endl;
		cout<<"6.clear screen"<<endl<<endl;
		cin>>option;
		
		
		Node * new_node=new Node();
		
		
		switch(option)
		{
			case 0:
				break;
				
			case 1:
				cout<<"enqueue function called-"<<endl;
				cout<<"enter key and value of node to enqueue"<<"in the queue"<<endl;
				cin>>key;
				cin>>data;
				new_node->key=key;
				new_node->data=data;
				q.enqueue(new_node);
				break;
				
			case 2:
				cout<<"dequeue function called"<<endl;
				new_node=q.dequeue();
				cout<<"dequeued value is:("<<new_node->key<<","<<new_node->data<<")";
				delete new_node;
				cout<<endl;
				break;
				
			case 3:
				cout<<"isempty function called-"<<endl;
				if(q.isempty())
				{
					cout<<"queue is empty"<<endl;
					
				}
				else
				{
					cout<<"queue is mot empty"<<endl;
					
				}
				break;
			case 4:
				cout<<"count function called-"<<endl;
				cout<<"no of nodes in the queue:"<<q.count()<<endl;
				break;
				
			case 5:
				cout<<"display function called-"<<endl;
				q.display();
				cout<<endl;
				break;
				
			case 6:
				system("cls");
				break;
			default:
				cout<<"enter proper option number"<<endl;
				
				
		}
		  
		
	}while(option!=0);
}
