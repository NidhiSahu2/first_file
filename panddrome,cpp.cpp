#include<iostream>
using namespace std;
int main()
{
	int n, num, digit, rev=0;
	cout<<"ENTre a positive num"<<endl;
	cin>>num;
	do
	{
		digit = num%10;
		rev = (rev*10)+digit;
		num= num/10;
		
	}
	while(num!=0);
	{
		cout<<"the rev number of this"<<rev<<endl;
		
		if(n==rev)
		cout<<"no is pandidrome"<<endl;
		else
		{
		cout<<"no pandidrome"<<endl;
		}
	}
}
