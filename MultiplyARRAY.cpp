#include <iostream>
using namespace std;
int Mul(int arr[], int s){
	
	int multiple=1;
	for( int i=0;i<s;i++ ){
		
		multiple= multiple*arr[i];
		
	}
	return multiple;
}
 
 int main(){
 	int arr[]={ 5,5,5,9,7 };
 	
 	int size=sizeof(arr)/sizeof(int);
 	
 	int total =Mul(arr,size);
 	
 	cout<<"sum of array is --->"<<total;
 	
 	return 0;
 }
