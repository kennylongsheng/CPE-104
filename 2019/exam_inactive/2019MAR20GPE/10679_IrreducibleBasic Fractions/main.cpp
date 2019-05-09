// TLE 0.40
#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if(b == 0){
    	return a;
    }
    return gcd( b , a%b );
}
int main(){
	unsigned int a , ans;
	while(cin>> a && a != 0){
		ans = 0;
		for(int i = 1 ; i < a ; i++){
			if(gcd(i,a) == 1){ans++;}
		}
		cout<<ans<<endl;
	}
	return 0;
}