#include<iostream>
using namespace std;
int  findSmallest(int arr[], int s ){
	int min=arr[0];
	for ( int i=0;i<s;i++){
		if( arr[i]<min){
			min =arr[i];
		}

	}
	return min;	
}
int main(){
	int arr[]={11,5,31,14,55,66};
	int size=sizeof(arr)/sizeof(int);
	int small = findSmallest(arr,size);
	cout<<"SMALLEST IN ARRAY IS -->"<<small;

	return 0;
}