#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
		Node *prev;
		
Node(int value)
{
data =value;
next=NULL;
prev=NULL;	
}
};
int main()
{
	Node *head=NULL;
	//insert at the beginning//
	//linked list does'nt exit//
	if(head==NULL)
	{
		head=new Node(5);
	}
	//if linked list exit katri h//
	else
	{
		Node *temp=new Node(5);
		temp->next=head;
		head->prev=temp;
		head=temp;
		head=temp;
	}
	//so how to print data in lined list//
	Node *trav=head;
	while(trav)
	{
		cout<<trav->data<<" "<<endl;
		trav=trav->next;
	}
}

