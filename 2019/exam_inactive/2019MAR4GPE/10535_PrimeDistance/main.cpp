#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int inp){
	int sq = sqrt(inp);
	for(int loop = 2 ; loop < sq ; loop++ ){
		if(inp % loop == 0){
			return false; 
		}
	} 
	return true;
}

int main(){
	int L , U , count = 0;
	while(cin>>L>>U){
		for(int loop = L ; loop <= U ; loop++){
			if(isPrime(loop)){
				if(loop > 2147480000){
					cout<<loop<<endl;
				}
				count++;
			}
		}
		cout<<count<<endl;
	}

}