#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int arr[n],num1, num2 , count = 0;
		for(int loop = 0 ; loop < n ; loop++ ){
			cin>>arr[loop];
		}
		sort(arr , arr+n);
		num1 = arr[int((n-1)/2)];
		num2 = arr[int((n-1)/2)+1];
		cout<< num1 <<" ";
		if(n > 1 && n % 2 == 0){
			for(int loop = 0 ; loop < n ; loop++ ){
				if(arr[loop] == num1 || arr[loop] == num2){
					count++;
				}
			}
			cout<<count<<" "<<(num2 - num1 +1)<<endl;
		}
		else{
			for(int loop = 0 ; loop < n ; loop++ ){
				if(arr[loop] == num1){
					count++;
				}
			}
			cout<<count<<" 1"<<endl;
		}
	}
	return 0;
}