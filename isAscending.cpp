#include<iostream>
using namespace std;
bool Arrang(int arr[],int size){
int count =0;
	for(int i=0;i<size-1;i++){
	if (arr[i]>arr[i+1] ){
		return false;
	}
	}
	return true;
}

int main()
{
	int array[]={1,2,3,6,4,5};
int siz =sizeof(array)/sizeof(int);
if (Arrang(array,siz)){

cout<<"arranged "<<endl;
}
else{
cout<<" not arranged "<<endl;	
}
return 0;
}
	
	
	