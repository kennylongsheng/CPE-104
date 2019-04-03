#include <iostream>
using namespace std;

int cal_b1(int userIn){
	int ans = 0;
	while(userIn >0){
		if(userIn%2 == 1){
			ans++;
			userIn-=1;
		}
		userIn/=2;
	}
	return ans;
}

int cal_b2(int userIn){
	int ans = 0;
	while(userIn >0){
		int temp = userIn%10;
		ans+=cal_b1(temp);
		userIn-=temp;
		userIn/=10;
	}
	return ans;
}

int main(){
	int num,userIn;
	cin>>num;
	while(num){
		cin >> userIn;
		cout << cal_b1(userIn) <<" "<< cal_b2(userIn) <<endl;
		num--;
	}
	return 0;
}