#include <iostream>
#include <string>
//#include <fstream>
using namespace std;
int rev[128] = {0};
string res[4] ;
void init(){
	rev['A'] = ' ';rev['E'] = '3';rev['H'] = ' ';rev['I'] = ' ';rev['J'] = 'L';rev['L'] = 'J';rev['M'] = ' ';rev['O'] = ' ';rev['S'] = '2';rev['T'] = ' ';rev['U'] = ' ';rev['V'] = ' ';rev['W'] = ' ';rev['X'] = ' ';rev['Y'] = ' ';rev['Z'] = '5';rev['1'] = ' ';rev['2'] = 'S';rev['3'] = 'E';rev['5'] = 'Z';rev['8'] = ' ';
	res[0] = " -- is not a palindrome.";res[1] = " -- is a regular palindrome.";res[2] = " -- is a mirrored string."; res[3] = " -- is a mirrored palindrome.";
}

int main(){
	init();
	//ofstream myfile;
	//myfile.open("output.txt");
	string userInput;
	int head , tail , id;
	bool isMirr, isPali;
	while(cin>>userInput){
		head = 0 ; tail = userInput.length()-1; isMirr = true; isPali = true;
		while(head<=tail){
			if(isPali && userInput[head] != userInput[tail]){
				isPali = false;
			}
			if(isMirr && ((userInput[head] == userInput[tail] && rev[userInput[head]] == ' ')  || (head!=tail && rev[userInput[head]] == userInput[tail]))){;}
			else{
				isMirr = false;
			}
			head++;tail--;
		}
		if(isPali && isMirr){id = 3;}
		else if(!isPali && isMirr){id = 2;}
		else if(isPali && !isMirr){id = 1;}
		else{id = 0;}
		cout<<userInput<<res[id]<<endl<<endl; //myfile<<
	}
	//myfile.close();
	return 0;
}