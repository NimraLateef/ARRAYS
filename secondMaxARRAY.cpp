#include <iostream>
using namespace std;

int ndlarg(int arr[],int size)
{
	int max =arr[0];
	int secMax=-1;
	for(int i=0;i<size ;i++){
		
		if(arr[i]>max){
			secMax=max;
			max=arr[i];
		}
		 else if (arr[i] > secMax && arr[i] < max) {
            secMax = arr[i];
        }
}
return secMax;  
}
int main(){
	
	
	int arr[]={2,3,4,54,51,11};
int siz=sizeof(arr)/sizeof(int);
cout<<"second largest num is "<<ndlarg(arr,siz)<<endl;
return 0;
}
