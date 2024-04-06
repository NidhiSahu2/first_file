#include<iostream>
using namespace std;
int main()
{
	int numbers[20];
	int sum=0;
	for(int i=0; i<20; i++)
	{
		cout<<"Enter a element "<<i+1<<" :";
		cin>>numbers[i];
		sum+=numbers[i];
	}
	cout<<"the number of elements"<<sum<<endl;
	return 0;
}
