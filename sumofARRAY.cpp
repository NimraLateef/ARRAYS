#include <iostream>
using namespace std;
int sumArr(int arr[], int s){
	
	int sum=0;
	for( int i=0;i<s;i++ ){
		
		sum=sum+arr[i];
		
	}
	return sum;
}
 
 int main(){
 	int arr[]={ 2,58,69,57,67,98,2 };
 	
 	int size=sizeof(arr)/sizeof(int);
 	
 	int total =sumArr(arr,size);
 	
 	cout<<"sum of array is --->"<<total;
 	
 	return 0;
 }
 
 