#include <iostream>
#include <stdio.h>
using namespace std;
int calc(int use){
	int count = 1, inp = use;
	while( inp>1 ){
		count++;
		if(inp%2==1){inp=inp * 3 + 1;}
		else{inp/=2;}
	}
	return count;
}

int main(){
	unsigned int i,j,ans,temp;
	while((cin>>i>>j) != 0 && i > 0 && j < 1000000){
		ans = 0;
		cout<<i<<" "<<j<<" ";
		if(i>j){int temp = i ; i = j ; j = temp;}
		while(i <= j){temp=calc(i);if(ans < temp){ans = temp;} i++;}
		cout<<ans<<endl;
	}
	return 0;
}