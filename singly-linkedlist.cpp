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

class SinglyLinkedList{
	public:
		Node* head;
		
		SinglyLinkedList(){
			head=NULL;
		}
		SinglyLinkedList(Node *n)
		{
			head=n;
			
		}
		//check if node exists using key value
		Node* nodeExists(int k)
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
		
		//append node to the list
		
		
		void appendNode(Node *n)
		{
			if(nodeExists(n->key)!=NULL)
			{
				cout<<"node already exists"<<endl;
				
			}
			else
			{
				if(head==NULL)
				{ 
					head=n;
					cout<<"Node Appended"<<endl;
				}
				else
				{
					Node* ptr=head;
					
					while(ptr->next!=NULL)
					{
						ptr=ptr->next;
						
					}
					ptr->next=n;
					cout<<"Node Appended"<<endl;
					
					
				}
			}
		}
		
		//prepend mode-attach a node at the start
		
		void prependNode(Node* n)
		{
				if(nodeExists(n->key)!=NULL)
			{
				cout<<"node already exists";
				
			}
			else
			{
				  n->next=head;
				  head =n;
				  cout<<"node prepended"<<endl;
				  
				  
			}
		}
		
		//insert a node after a particular node in the list
		
		void insertNodeAfter(int k,Node *n)
		{
			
			Node* ptr=nodeExists(k);
			
			if(ptr==NULL)
			{
				cout<<"no node exists with key value:"<<k<<endl;
				
			}
			else
			{
				if(nodeExists(n->key)!=NULL)
				{
					cout<<"node already exists"<<endl;
					
				}
				else
				{
					n->next=ptr->next;
					ptr->next=n;
					cout<<"node prepended"<<endl;
					
				}
			}
			
		}
		
	void deleteNodeBykey(int k)
	{
		
		if(head==NULL)
		{
			cout<<"singly linked list already empty,cant delete "<<endl;
			
		}
		
		else if(head!=NULL)
		{
			if(head->key==k)
			{
				head=head->next;
				cout<<"node unlinked with keys value:"<<k<<endl;
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
				if(temp!=NULL)
				{
					prevptr->next=temp->next;
					cout<<"node unlinked with key value:"<<k<<endl;
					
					
				}
				else
				{
					cout<<"node doesnot exists with key value:"<<k<<endl;
					
				}
				
				 
			}
			
		}
	}
	
	
	//update node
	void updateNodeBykey(int k,int d)
	{
		Node* ptr=nodeExists(k);
		
		if(ptr!=NULL)
		{
			ptr->data=d;
			cout<<"node data upated successfully"<<endl;
			
		}
		else
		{
			cout<<"node doesnot exists with key value:"<<k<<endl;
			
		}
		
	}
	
	//printing
	
	void printList()
	{
		
		
		if(head==NULL)
		{
			cout<<"no nodes in singly linked list";
			
		}
		else
		{
			cout<<endl<<"singly linked list values:";
			Node* temp=head;
			
			while(temp!=NULL)
			{
				cout<<"("<<temp->key<<","<<temp->data<<")-->";
				temp=temp->next;
				
			}
		}
	}
	
	
	
	
	
	
};


int main()
{

   SinglyLinkedList s;
   
   int option;
   int key1,k1,data1;
   
   
   do
   {
       	cout<<"\n what operation do you want to perform? select option number.enter 0 to exit."<<endl;
   	    cout<<"1.appendnode()"<<endl;
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
			       cout<<"append node operation \nenter key and data of the node to be aappended"<<endl;
				   cin>>key1;
				   cin>>data1;
				   n1->key=key1;
				   n1->data=data1;
				   s.appendNode(n1);	
   	        	   break;
   	       
   	       
   	       
   	        case 2:
   	        	cout<<"prepend node operation \n enter key and data of the node to be prepended"<<endl;
   	        	cin>>key1;
   	        	cin>>data1;
   	        	n1->key=key1;
   	        	n1->data=data1;
   	        	s.prependNode(n1);
   	        	break;
   	        	
   	    	
   	    	case 3:
   	    		cout<<"insert node after operation \n enter key of existing node after which you want to insert this new node:"<<endl;
   	    		cin>>key1;
   	    		cout<<"enter key and data of the new node first:"<<endl;
   	    		cin>>key1;
   	    		cin>>data1;
   	    		n1->key=key1;
   	    		n1->data=data1;
   	    		
   	    		s.insertNodeAfter(k1,n1);
   	    		break;
   	        
   	        
   	        
   	        case 4:
   	        	cout<<"delete node by key operation-\n enter key of the node to be deleted:"<<endl;
   	        	cin>>k1;
   	        	s.deleteNodeBykey(k1);
   	            break;
				
				
		    case 5:
			     
				 
				 cout<<"updated node by key operation-\n enter key and new data to be updated"<<endl;
				 cin>>key1;
				 cin>>data1;
				 s.updateNodeBykey(key1,data1);
				 break;
				 
				 
		    case 6:
			    
				
				  s.printList();
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
