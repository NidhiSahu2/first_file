#include<iostream>
using namespace std;
class solution {
	public:
		string defanging(string address)
	
	{
	string ans;
	int index =0;	
		
		
	while(index<address.size()){
		
	if(address[index]==',')
	ans+="[.]";
	else
	ans+=address[index];
	index++;
    }
    int main()
    {
    	solution s;
    	s.string defanging();
	}
		
	
	return ans;
}
	
};
