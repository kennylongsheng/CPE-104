#include <iostream>
using namespace std;

int main(){
	int x, y , x1 , y1;
	char str[3][25] = {{"No carry operation."},{"1 carry operation."},{" carry operations."}};
	while(cin>>x>>y && (x!=0 || y!=0)){
		int ans=0;
		bool carry = false;
		while(x!= 0 || y!=0){
			x1 = x%10;
			y1 = y%10;
			x /=10;
			y /=10;
			if((x1 + y1 + carry) > 9 ){
				carry = true;
				ans++;
			}
			else{
				carry = false;
			}
		}
		if(ans == 0){
			cout << str[0] << endl;
		}
		else if(ans == 1){
				cout<<str[1]<<endl;
			}
		else {
			cout<<ans<<str[2]<<endl;
		}
	}
	return 0;
}