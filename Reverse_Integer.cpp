#include<limits.h>
class Solution {
public:
    int reverse(int x) {
        int ans  = 0;
        while( x != 0) {
            int digit = x % 10;
            if( (ans > INT_MAX/10) || (ans < INT_MIN/10)) {
                return 0;
            }
            ans = (ans * 10) + digit;
            x = x / 10;
        }
        return ans;
    }
};



//2nd Method


//#include <iostream>
//#include<math.h>
//using namespace std;
//int main(){
//	int n,b=0;
//	cin>>n;
//	int x=n;
//	int i=0,ans=0;
//	
//	while(n!=0){
//		n=n/10;
//		i++;
//	}
//	cout<<i<<endl;
//	
//	while(x!=0){
//		b=x%10;
//		x = x/10;
//		ans=(b*pow(10,i-1))+ans;
//		i--;
//	}
//	cout<<ans;
//}
