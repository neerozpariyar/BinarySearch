#include<iostream>
#include<cmath>

using namespace std;

int binarySearch(int a[] , int lower, int upper , int key){
	if(upper > lower)
	{
		int mid = (lower+upper)/2;
		if(a[mid] == key)
		{
			return mid;
		}
		if(a[mid]<key)
		{
			return binarySearch(a , mid+1 , upper ,key);
		}
		if(a[mid]>key)
		{
			return binarySearch(a , lower , mid-1 , key);
		}
		

	}
			return -1;
}
int main()
{
	int a[10]={5,9,17,23,25,45,59,63,71,89},key;
	int l=0;
	int u=sizeof(a)/sizeof(a[0]);
	cout<<"Enter the number whose position is to be found ";
	cin>>key;
	int result = binarySearch(a, l , u , key);
	
	if(result == -1){
		cout<<"The number doesn't exist";
	}
	else
	cout<<"The number lies in position:"<<result;
	
}


