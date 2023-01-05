// for swapping alternate elements of an array example i and i+1 like (0 and 1)(1,2)(3,4)(4,5) 

#include <iostream>
using namespace std;

	
void swapalt(int arr[],int size){
	int x;
	for(int i = 0;i<size;i=i+2){
		if(i+1<size){
			x=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=x;
		}
	}
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}


int main(){
	int abc[6]={1,2,3,4,5,6};
	
	swapalt(abc,6);
}
