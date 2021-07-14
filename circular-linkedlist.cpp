#include<iostream>

using namespace std;


class Node{
	
	
	public:
		int key;
		int data;
		Node* next;
		
		
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
			
		}
		
		
};


class CircularLinkedList
{
	public:
		Node* head;
		
		CircularLinkedList()
		{
			head=NULL;
			
			
		}
		
		Node* nodeExists(int k)
		{
			Node* temp=NULL;
			Node* ptr=head;
			
			
			if(ptr==NULL)
			{
				return temp;
				
			}
			
			else
			{
				do
				{
					if(ptr->key==k)
					{
						temp=ptr;
						
					}
					ptr=ptr->next;
					
				}while(ptr!=head);
			
			
				return temp; 
				
			}
			
			
			
			
		}
		
		
		//append a node to the list
		
		
		
		void appendNode(Node *new_node)
		{
			 
			 if(nodeExists(new_node->key)!=NULL)
			 {
			 	cout<<"node already exists with key value:"<<new_node->key<<"append another node with different key value"<<endl;
			 	
			 	
			 }
			 
			 else
			 {
			 	
			 	
			 	if(head==NULL)
			 	
			 	{
			 		head=new_node;
			 		new_node->next=head;
			 		cout<<"node appended at first head position"<<endl;
			 		
				 }
				 
				 else
				 {
				 	Node* ptr=head;
				 	while(ptr->next!=head)
				 	{
				 		
				 		ptr=ptr->next;
				 		
					}
					ptr->next=new_node;
					
					new_node->next=head;
					
					cout<<"Node appended"<<endl;
					
				 }
			 }
			 
			 
			 
		}
		
		
		//prepend node
		
		void prependNode(Node* new_node)
		{
			 
			 if(nodeExists(new_node->key)!=NULL)
			 {
			 	cout<<"node already exists with key value:"<<new_node->key<<"append another node with different key value"<<endl;
			 	
			 }
			 
			 else
			 {
			 	if(head==NULL)
			 	{
			 		head=new_node;
			 		new_node->next=head;
			 		cout<<"node prepended at first head position"<<endl;
			 		
				 }
				 
				 else
				 {
				   Node* ptr=head;
			 	 while(ptr->next!=head)
			 	 {
			 		ptr=ptr->next;
			 		
				 } 
				
				 ptr->next=new_node;
				
				 new_node->next=head;
				
				 head=new_node;
				  cout<<"node prepended"<<endl;
			}
				
			 }
			 
			 
			 
		}
		
		
		
		void insertNodeAfter(int k,Node *new_node)
		{
			
			Node* ptr=nodeExists(k);
			if(ptr==NULL)
			{
				cout<<"no node exists with key value of:"<<k<<endl;
				
			}
			
			else
			{
				if(nodeExists(new_node->key)!=NULL)
				{
					cout<<"node already exists with key value:"<<new_node->key<<"append another node with different key value"<<endl;
					
					
				}
				else
				{
					if(ptr->next==head)
					{
						new_node->next=head;
						ptr->next=new_node;
						cout<<"node inserted at the end"<<endl;
						
					}
					else
					{
						new_node->next=ptr->next;
						ptr->next=new_node;
						cout<<"node inserted in between"<<endl;
						
						
					}
				}
			}
			
			
			
		}
		
		
		
		void deleteNodebyKey(int k)
		{
			Node* ptr=nodeExists(k);
			if(ptr==NULL)
			{
				cout<<"no node exists with key value of:"<<k<<endl;
				
			}
			else
			{
				if(ptr==head)
				{
					if(head->next==NULL)
					{
						head=NULL;
						cout<<"head node unlinked...list empty";
					}
					else
					{
						Node* ptr1=head;
						while(ptr1->next!=head)
						{
							ptr1=ptr1->next;
							
						}
						
						ptr1->next=head->next;
						head=head->next;
						cout<<"node unlinked with keys value:"<<k<<endl;
						
						
					}
				}
				else
				{
					Node* temp=NULL;
					Node* prevptr=head;
					Node* currentptr=head->next;
					while(currentptr!=NULL)
					{
						if(currentptr->key==k)
						{
							temp=currentptr;
							currentptr=NULL;
							
						}
						else
						{
							prevptr=prevptr->next;
							currentptr=currentptr->next;
							
						}
					}
					
					prevptr->next=temp->next;
					cout<<"node unlinked with key value:"<<k<<endl;
					
					
				}
			}
			
		}
		
		void updateNodebyKey(int k,int new_data)
		{
			Node* ptr=nodeExists(k);
			
			if(ptr!=NULL)
			{
				ptr->data=new_data;
				cout<<"node data updated successfully"<<endl;
				
			}
			else
			{
				cout<<"node doesnot exist with key value:"<<k<<endl;
				
			}
		}
		
		
		void printlist()
		{
			if(head=NULL)
			{
				cout<<"no nodes in singly linked list";
				
			}
			else
			{
				cout<<endl<<"head address:"<<head<<endl;
				cout<<"singly linked list vlaues:"<<endl;
				
				
				Node* temp=head;
				
				
				do{
					cout<<"("<<temp->key<<","<<temp->data<<","<<temp->next<<")-->";
					
					temp=temp->next;
					
				} while(temp!=head);
				
				
			}
		}
		
		
		
};

int main()
{
	CircularLinkedList obj;
	
	int option;
	int key1,k1,data1;
	
	do
	{
	    cout<<"\n what operation do you want to perform?select option number.enter 0 to exit."<<endl;
		cout<<"1.appennode()"<<endl;
		cout<<"2.prependnode()"<<endl;
		cout<<"3.insertnodeafter()"<<endl;
		cout<<"4.deletenodebykey()"<<endl;
		cout<<"5.updatenodebykey()"<<endl;
		cout<<"6.print()"<<endl;
		cout<<"7.clear screen"<<endl<<endl;
		
		
		cin>>option;
		
		Node* n1=new Node();
		
		switch(option)
		{
			case 0:
				break;
			
			
			case 1:
				cout<<"append node operation \n enter key anda data of the node to be appended"<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				obj.appendNode(n1);
				
				break;
				
			
			
			case 2:
				cout<<"prepend node operation \n enter key and data of the node to be prepended"<<endl;
				cin>>key1;
				cin>>data1;
				
				n1->key=key1;
				n1->data=data1;
				
				obj.prependNode(n1);
				break;
				
				
				
			case 3:
				  cout<<"insert node after operation \n enter key of existing node after which you want to insert this new node :"<<endl;
				  cin>>k1;
				  cout<<"enter key and data of the new node first :"<<endl;
				  cin>>key1;
				  cin>>data1;
				  n1->key=key1;
				  n1->data=data1;
				  
				  obj.insertNodeAfter(k1,n1);
				  break;
				  
			
			case 4:
				cout<<"delete node by key operation \n enter key of the node to be deleted :"<<endl;
				cin>>k1;
				obj.deleteNodebyKey(k1);
				break;
			
			
			case 5:
				cout<<"update node by key operation -\n enter key and new data to be updated"<<endl;
				cin>>key1;
				cin>>data1;
				obj.updateNodebyKey(key1,data1);
				break;
				
				
			case 6:
				obj.printlist();
				break;
				
			case 7:
				system("cls");
				break;
				
			default:
				cout<<"enter proper option number"<<endl;
				
				
				
			}	
	}while(option !=0);
	
	return 0;
	
	
}

