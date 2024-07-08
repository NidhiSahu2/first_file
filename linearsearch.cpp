#include<iostream>
using namespace std;
int search (int array[], int n, int x){

for(int i=0; i<n; i++)

	if(array[i]==x)
	return i;
	return -1;
}
int main()
{
	int array[]= {2,4,6,7,9};
	int x = 9;
	int n = sizeof(array)/sizeof(array[0]);
	int result =  (array,  n,  x);
	(result ==-1)? cout<<"ELEment not found": cout<<"ELEMENT FOUND AT index"<<endl;
	
}
