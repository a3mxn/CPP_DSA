#include <iostream>
#include<math.h>
using namespace std;

int main(){
	int n,ans=0,i=0;
	cin>>n;
	
	while(n!=0){
		int b = n % 10;
		n =n/10;
		ans = (b*pow(2,i))+ans;
		i++;
	}
	cout<<ans;
}