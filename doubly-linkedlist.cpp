#include<iostream>

using namespace std;

class Node{
	public:
		int key;
		int data;
		Node* next;
		Node* previous;
		
		
		Node()
		{
			key=0;
			data=0;
			next=NULL;
			previous=NULL;
			
		}
		
		Node(int k, int d)
		{
			key=k;
			data=d;
			
		}
};

class DoublyLinkedList{
	
	
	public:
		Node* head;
		
		DoublyLinkedList()
		{
			head=NULL;
			
		}
		
		DoublyLinkedList(Node* n)
		{
			head=n;
		}
		
		// check if node exists using key value
		
		
		Node* checkifNodeExists(int k)
		{
			Node* temp=NULL;
			Node* ptr=head;
			
			while(ptr!=NULL)
			{
				if(ptr->key==k)
				{
					temp=ptr;
					
				}
				ptr=ptr->next;
				
			}
			return temp;
			
		}
	    
	   //apend a node to the list
	   
	   void appendNode(Node* n)
	   {
	   	
	   	  if(checkifNodeExists(n->key)!=NULL)
	   	  {
	   	      cout<<"Node already exists with key value"<<endl;  	
		 }
		 
		 else
		 {
		 	if(head==NULL)
		 	{
		 		head=n;
		 		cout<<"Node appended as head node"<<endl;
		 		
			 }
			 else
			 {
			 	Node* ptr=head;
			 	while(ptr->next!=NULL)
			 	{
			 		ptr=ptr->next;
			 		
				 }
				 
				 ptr->next=n;
				 n->previous=ptr;
				 cout<<"Node appended"<<endl;
				 
				 
				 
			 	
			 }
		 }
	   	   
	   }
	   
	   void prependNode(Node* n)
	   {
	   	
	   	   if(checkifNodeExists(n->key)!=NULL)
	   	   {
	   	   	  cout<<"node already exists with key value"<<n->key<<endl;
	   	   	  
			}
			
			else
			{
				if(head==NULL)
				{
					head=n;
					cout<<"node prepended as head node"<<endl;
					
				}
				
				else
				{
					
				
				
			     	head->previous=n;
				    n->next=head;
				
			     	head=n;
				
				    cout<<"node prepended"<<endl;
			    }
			
			} 
	   }
	   
	   void insertNodeAfter(int k,Node *n)
	   {
	   	Node* ptr=checkifNodeExists(k);
	   	
	   	if(ptr==NULL)
	   	{
	   		cout<<"no nde exists with key value"<<k<<endl;
	   		
		}
		
		else
		{
			if(checkifNodeExists(n->key)!=NULL)
			{
				
				cout<<"node already exists with key value:"<<n->key<<"append another node with different key value"<<endl;
				
			}
			
			else
			{
				cout<<"INSERTING"<<endl;
				
				Node* nextNode=ptr->next;
				
				if(nextNode==NULL)
				{
					ptr->next=n;
					n->previous=ptr;
					cout<<"Node inserted at the end"<<endl;
					
				}
				
				else
				{
					n->next=nextNode;
					nextNode->previous=n;
					n->previous=ptr;
					ptr->next=n;
					
					cout<<"Node inserted in between"<<endl;
					
				}
			}
		}
		   
	   	
	   	
	   }
	
	
	   void deleteNodeBykey(int k)
	   {
	   	Node* ptr=checkifNodeExists(k);
	   	
	   	if(ptr==NULL)
	   	{
	   	    cout<<"no node exists with key value"<<k<<endl;
			   	
		}
		else
		{
			if(head->key==k)
			{
				head=head->next;
				cout<<"node unlinked with keyss value:"<<"k"<<endl;
				
			}
			else
			{
				Node *nextNode=ptr->next;
				Node *prevNode=ptr->previous;
				
				//deleting at the end
				
				if(nextNode==NULL)
				{
					prevNode->next=NULL;
					cout<<"node deleed at the end"<<endl;
					
				}
				
				//deleting in between
				else
				{
					prevNode->next=nextNode;
					nextNode->previous=prevNode;
					cout<<"node deleted in between"<<endl;
					
				}
				
				
				
				
				
				
			}
		}
	   }
	   
	   void updateNodeBykey(int k,int d)
	   {
	   	
	   	Node* ptr=checkifNodeExists(k);
	   	
	   	if(ptr!=NULL)
	   	{
	   		ptr->data=d;
	   		cout<<"node data updated successfully"<<endl;
	   		
		}
		else
		{
			cout<<"node doesnot exist with key value:"<<k<<endl;
			
		}
		
		
		
		
		
	   }
	   void printList()
	   {
	   	
	   	  if(head==NULL)
	   	  {
	   	  	cout<<"no node in doubly linked list";
	   	  	
		 }
		 
		 else
		 {
		 	cout<<endl<<"doubly linked list values:";
		 	Node* temp=head;
		 	
		 	while(temp!=NULL)
		 	{
		 		cout<<"("<<temp->key<<","<<temp->data<<")<--->";
		 		temp=temp->next;
			 }
		 }
	   	
	   	  
	   }
	   
};


int main()
{
	
	
	DoublyLinkedList obj;
	int option;
	int key1,k1,data1;
	
	do
	{
		cout<<"\n what operation do you want to perform? select option number.enter 0 to exit"<<endl;
		cout<<"1.appendnode()"<<endl;
		cout<<"2.prependnode()"<<endl;
		cout<<"3.insertnodeafter()"<<endl;
		cout<<"4.deletenodebykey()"<<endl;
		cout<<"5.updatnodebykey()"<<endl;
		cout<<"6.print()"<<endl;
		cout<<"7.clear screen"<<endl;
		
		
		cin>>option;
		
		Node* n1=new Node();
		
		
		switch(option)
		{
			
			case 0:
				break;
			
			
			case 1:
			     cout<<"append node operation \n enter they key and sata of the node to be appended"<<endl;
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
				cout<<"insert node after operation \n enter key of existing node after which you want to insert this new node:"<<endl;
				cin>>k1;
				cout<<"enter key and data of the new node first:"<<endl;
				cin>>key1;
				cin>>data1;
				n1->key=key1;
				n1->data=data1;
				
				obj.insertNodeAfter(k1,n1);
				break;
				
				
			case 4:
				cout<<"delete node by key operation \n enter key of the node to be deleted:"<<endl;
				cin>>k1;
				obj.deleteNodeBykey(k1);
				break;
				
				
				
			case 5:
				cout<<"update node by key operation -\n enter key and new data to be updated"<<endl;
				cin>>key1;
				cin>>data1;
				obj.updateNodeBykey(key1,data1);
				break;
				
				
			case 6:
				obj.printList();
			
			
			case 7:
				system("cls");
				break;
				
			default:
				cout<<"enter proper option number"<<endl;
				
				
				
		}
		
		
		
	}while(option!=0);
	
	
	return 0;
	
	
}
