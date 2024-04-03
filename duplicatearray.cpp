#include<iostream>
using namespace std;
int main()
{
	int arr[5]={1,2,3,6,3 };
	int dcount =0;
	int size = sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i<size; i++)
	{
		for(int j=i+1; j<size; j++)
		{
		if(arr[i]==arr[j])
		{
			dcount +=1;
			
		}
		}
		
		
	}
	cout<<"no of duplicate"<<dcount<<endl;
	return 0;
}
