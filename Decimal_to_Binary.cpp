#include <iostream>
#include<math.h>
using namespace std;

int main(){
	int i=0,n,bit=0,ans=0;
	cin>>n;
	
	while(n!=0){
		bit = n & 1;
		n=n>>1;
		
		ans=(bit*pow(10,i))+ans;
		i++;
	}
	cout<<ans;
}