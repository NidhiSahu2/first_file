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
 // insert and cerate a linked list//
 
 int main()
 {
 	Node *Head,Tail;
 	Head=Tail=NULL;
 	int arr[]={1,2,4,5,6,19};
 	//insert a element at the end//
 	for(int i=0; i<=6; i++)
 	{
 		if (Head==NULL)
 		{
 			Head=new Node (arr[i]);
 		    Tail=Head;
 			
		 }
		//linked list exit karti h//
		
		 else 
		 {
		 	Tail->next = new Node(arr[i]);
		 	Tail= Tail->next;
		 	
		 }
 Node *temp;
 temp=Head;
 while(temp)
 {
 	cout<<temp->data<<" ";
 	temp=temp->next;
 	
	 }
}
