//calculate the average of element in array of size 18>>//
#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	int size =18;
	int numbers[size];
	double sum=0.0;
	for(int i=0; i<size; i++)
	{
		cout<<"enter A number"<<i+1<<":";
		cin>>numbers[i];
		sum+=numbers[i];
		
	}
	double average = (sum)/size;
	//set the output to display average with2 decimal places//
	cout<<fixed<<setprecision(2);
	cout<<"the average of the element is"<<average<<endl;
	return 0;
}
