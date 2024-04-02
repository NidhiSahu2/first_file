//how to find a perfact number//
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int div,num,sum=0;
	cout<<"	Enter a number to check"<<endl;
	cin>>num;
	for(int i=1;i<num;i++){
	
	div=num%i;
	if(div==0)
	sum+=i;
	
}
if(sum==num)
cout<<num<<"is a perfact"<<endl;
else
cout<<"is a not perfact not"<<endl;	
return 0;
}
