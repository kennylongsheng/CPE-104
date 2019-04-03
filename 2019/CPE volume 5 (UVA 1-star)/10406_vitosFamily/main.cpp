#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;
int main(){
	ofstream myfile;
	myfile.open("output.txt");
	int t , r , temp ,count , mid;
	cin>>t;
	for(;t;t--){
		cin>>r;
		count = 0;
		int arr[r];
		for(int loop = 0 ; loop < r; loop++ ){
			cin>>temp;
			arr[loop] = temp;
		}
		sort(arr, arr+r);
		mid = arr[int(r/2)]; // Essential part
		for(int loop = 0 ; loop < r; loop++ ){
			count+=abs(mid - arr[loop]);
		}
		cout<<count<<endl;
		myfile<<count<<endl;
	}
	myfile.close();
	return 0;
}

// sort( vector.begin , vector.end)