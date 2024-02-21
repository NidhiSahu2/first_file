// we will do reverse array //
#include<iostream>
using namespace std;
 class Node
 {
 	public:
 	int data;
 	Node *next;
 	
 	Node(int value){
	 
 	data =value;
 	
 	next =NULL;
 }
 };
 Node* head;
 Node* temp=head;
 while(temp!=NULL)
 {
 	cout<<temp->data<<" "<<endl;
 	temp=temp->next;
}

 Node* reverse(Node* &head)
 {
 	Node* prevptr=NULL;
 	Node* currentptr=head;
 	Node*nextptr;
 	
 	while(currentptr!=NULL)
 	{
 		nextptr=currentptr->next;
 		currentptr->next=prevptr;
 		prevptr=currentptr;
 		currentptr=nextptr;
	 }
 }
 int main()
 {
 	Node* head=NULL;
 	insertatTail(head,1);
 	insertatTail(head,2);
 	insertatTail(head,3);
 	insertatTail(head,4);
 	display(head);
 	Node* newhead=reverse(head);
 	display(newhead);
 }
 
