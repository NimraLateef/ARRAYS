#include<iostream>
using namespace std;
int  findMax(int arr[], int s ){
	int max=arr[0];
	for ( int i=0;i<s;i++){
		if( arr[i]>max){
			max =arr[i];
		}

	}
	return max;	
}
int main(){
	int arr[]={54,54,31,4,55,66};
	int size=sizeof(arr)/sizeof(int);
	int total = findMax(arr,size);
	cout<<"MAXIMUM IN ARRAY IS -->"<<total;

	return 0;
}