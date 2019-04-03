#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
	int S , n , i;
	double p , q , ans;
	cin>>S;
	for(;S;S--){
		cin>>n>>p>>i;
		if(p == 0){ans = 0;}
		else{
			q = 1 - p ;
			ans = (p * pow(q , i-1)) / (1 - pow(q,n));
		}
		cout<<setprecision(4)<<fixed<< ans <<endl;
	}
}