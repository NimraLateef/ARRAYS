#include <iostream>
using namespace std;

int Prime(int arr[],int size)
{
int count =0;
for (int i=0;i<size ;i++){
	
	if ( arr[i]>=1)
	{
		
		int temp=1;
		for(int j=0;j<=arr[i];j++){
			temp =0;
			break;
		}
		count=count +temp;
	}
}
return count;
}
int main()
{
	
	int arr[]={2,3,4,5,6,7,51,11};
int siz=sizeof(arr)/sizeof(int);
	int count1=Prime(arr,siz);
cout<<"no. of prime numbers is  "<<count1;
return 0;
}
	