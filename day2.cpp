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
 	Node *Head;
 	Head=NULL;
 	int arr[] = {2,4,6,8,10};
 	//insert the node at beginning //
 	//linked list doesn't exit//
 	for(int i=0; i<5; i++)
 	{
 		if (Head ==NULL)
 		{
 			Head = new Node(arr[i]);
 			
		 }
		 // linked list exit karti h //
		 
		 else
		 {
		 	Node *temp;
		 	temp=new Node(arr[i]);
		 	temp->next = Head;
		 	Head= temp;
		 	
		  } 
		 
	 }
	 // print the all values in linked list//
	 Node *temp=Head;
	 while (temp!= NULL)
	 {
	 	cout<<temp->data<<" "<<endl;
	 	 temp= temp->next ;
	 };
	 
	 
	 
 }
