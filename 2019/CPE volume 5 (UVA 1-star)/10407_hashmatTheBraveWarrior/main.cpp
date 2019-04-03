#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream myfile;
	myfile.open("output.txt");
	int x , y;
	while(cin>>x>>y){
		cout<<abs(x-y)<<endl;
		myfile<<abs(x-y)<<endl;
	}
	myfile.close();
	return 0;
}