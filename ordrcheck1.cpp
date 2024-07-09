#include<iostream>
using namespace std;
int arr [5]= {1,2,4,7,8};
int main()
{
int n;
int count =0;
for( int i=0; i<=n; i++)
{
	for(int j= i+1; j<n; j++)
	{
		if(arr[j]<arr[i])
		{
			return 1;
		}
	}
	if(count ==0)
	{
		cout<<"ACENDING ORDER"<<endl;
	}
	else
	{
		cout<<"DCENDING ORDER"<<endl;
	}

}
}
