#include <iostream>
#include <queue>
#include <set>
using namespace std;
char ans[2][10] ={{"Not jolly"},{"Jolly"}};

int calc(int x , int y){
	if(y>x){return y - x;}
	else{return x-y;}
}

int main(){
	int n , temp , res;
	queue<int> numIn;
	set<int> numCheck;
	while(cin>>n){
		while(numIn.size()>0){numIn.pop();}
		numCheck.clear();
		bool jolly = true;
		for(int i = n;i;i--){
			cin>>temp;
			numIn.push(temp);
		}
		while(numIn.size()>1){
			temp = numIn.front();
			numIn.pop();
			res = calc(temp,numIn.front());
			if( res > 0 && res < n){
				numCheck.insert(res);
			}
		}
		if(numCheck.size() == n-1){jolly = true;}
		else{jolly = false;}
	cout<<ans[jolly]<<endl;	
	}
	return 0;
}