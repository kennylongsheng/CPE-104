#include <iostream>
#include <string>
using namespace std;

int main(){
	unsigned int m, n , ans;
	while(cin>>m>>n){
		string strInp[m], userIn;
		unsigned int valInp[m];
		for(int loopIn = 0 ; loopIn != m ; loopIn++){
			cin>>strInp[loopIn]>>valInp[loopIn];
		}
		ans = 0;
		while(n){
			cin>>userIn;
			if(userIn == "."){
				cout<<ans<<endl;
				ans = 0;
				n--;
			}
			else{
				for(int i = 0 ; i != m ; i++){
					if(userIn == strInp[i]){
						ans+=valInp[i];
						break;
					}
				}
			}
		}
	}
	return 0;
}