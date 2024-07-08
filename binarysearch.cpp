#include<iostream>
using namespace std;
int binarysearch(int array[], int x, int low, int high)
{
	while(low<=high)
	{
		int mid = low+(high-low)/2;
		
		if(array[mid]==x)
		return mid;
		if( array[mid]<x)
		low = mid+1;
		else
		high = mid-1;
		
	}
	
	return -1;
	
}

int main()
{
	int array[]= {3,4,5,6,7,8,9};
	int x=4;
	int n= sizeof(array)/(array[0]);
	int result = binarysearch(array , x , 0, n-1);
	if(result ==-1)
	printf("NO FOUND");
	else
	{
		printf("Element is fount at index %d",result);
	}
}
