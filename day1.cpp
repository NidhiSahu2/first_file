#include<iostream>
using namespace std;
class Node
{
	public:
	
	int data;
	Node *next;
	
	Node (int value)
	{
		data= value;
		next =NULL;
		
	}
	
};
int main()
{
	Node *Head;
	Head = new Node(4);
	cout<<Head->data<<endl;
	cout<<Head->next<<endl;
	Node *temp;
	temp=new Node(5);
	cout<<temp->data<<endl;
	cout<<temp->next<<endl;
	cout<<Head->data+ temp->data<<endl;
	
}
	
