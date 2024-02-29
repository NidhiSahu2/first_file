#include<iostream>
using namespace std;
struct node
{
	int data;
	node*prev;
	node *next;
};
void insertNode_ATFRONT(node **head,*temp,int data)
	node *temp=new node();
	temp->data=data;
	//assign previous pointer to NULL//
	temp->prev=NULL;
	temp->next=head;
	if(head!=NULL)
	{
		head->prev=temp;
	}
	head =temp;
	return;
}
int main
{

node *head=NULL;
node *end =NULL;
insertNode_ATFRONT(head,1);
insertNode_ATFRONT(head,2);
insertNode_ATFRONT(head,3);
insertNode_ATFRONT(head,4);
cout<<"forword direction"<<endl;
while(head!=NULL)
{
	end=head;
	cout<<head->data<<"";
	head=head->next;
	
}
cout<<endl;
cout<<"backword direction"<<endl;
while(end!=NULL)
{
	cout<<end->data<<" ";
	end=end->prev;
}
return 0;

}
