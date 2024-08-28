#include <iostream>
using namespace std;

int Index(int arr[], int size, int target)
{
for(int i=0;i<=size;i++){


if (arr[i]== target)

{
cout<<"INDEX FOUND"<<i;
return i;
}
}
return -1;
}

int main()
{

int array[]={4,5,6,7,8,9,3};

int siz =sizeof(array)/sizeof(int);

int targets=5;

int tar=Index(array,siz,targets);

cout<<"TARGETED INDEX IN ARRAY IS -->"<<tar;
return 0;
}