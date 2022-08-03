#include <iostream>
using namespace std;

int main(){
	int n,elt;
	cin>>n;
	cin>>elt;
	int ary[10];
	bool search=false;
	for(int i=0;i<n;i++){
		cin>>ary[i];
	}
	for(int i=0;i<n;i++){
		if(elt==ary[i]){
			search = true;
			break;
		}
	}
	if(search==true){
		cout<<"found";
	}
	else{
		cout<<"not found";
	}
}
