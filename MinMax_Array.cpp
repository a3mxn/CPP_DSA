#include <iostream>
using namespace std;

int main(){
	int n,max=0,min=0;
	cin>>n;
	
	int ary[10];
	
	for(int i=0;i<n;i++){
		cin>>ary[i];
	}
	for(int i=0;i<n;i++){
		if(max<ary[i]){
			max=ary[i];
		}
	}
	for(int i=0;i<n;i++){
		if(min>ary[i]){
			min=ary[i];
		}
	}
	cout<<"max is ="<<max<<endl;
	cout<<"min is ="<<min<<endl;
}
