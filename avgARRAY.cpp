#include<iostream>
using namespace std;
 findavg(int avg[], int s ){

int sum=0;
	for( int i=0;i<s;i++ ){
		sum=sum+avg[i];	
	}

return sum/s;
}

int main(){
	int arr[]={1,5,6,58,68,97};
	int  size =sizeof(arr)/ sizeof(int);
	cout <<"average of arrays is "<<findavg(arr,size);
	//int result= findavg(arr,size);
	
	
	return 0;
}