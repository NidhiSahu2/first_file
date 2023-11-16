#include<iostream>
using namespace std;
int main()
{
	string s2 = "12321";
	 int start = 0, end = s2.size()-1;
	while(start<end)
	{
	if(s2[start]!=s2[end])
	{
	cout<<"not a pallindrome";
	return 0;	
		
	}	
	start++,end--;	
		
	}
	cout<<"it is a pallindrome:";
	
}
