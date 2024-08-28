...........//funtion takes char array nd itz length and count number of vowels in string
#include<iostream>
#include <string>
using namespace std;
int  vowelCount(const char a[],int  size){
	 int length=0;
	 for( int i=0;i<size;i++){
	 	
	 	char  ch =a[i];
	 	if (  ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'|| ch=='U'|| ch=='O'){
	 		
	 	length++;
		 }
		 
	 }

return length;	
}
int main(){
	const char arr[]="myearray";
int siz=sizeof(arr)/sizeof(arr[0]);
int var=vowelCount(arr,siz);
	cout <<"lenghth of vowal is "<<var<<endl;
	return 0;
}