////////////////////////////////////
/*
Input : 

7
WINNT\SYSTEM32\CONFIG
GAMES
WINNT\DRIVERS
HOME
WIN\SOFT
GAMES\DRIVERS
WINNT\SYSTEM32\CERTSRV\CERTCO~1\X86

Output :

GAMES
 DRIVERS
HOME
WIN
 SOFT
WINNT
 DRIVERS
 SYSTEM32
  CERTSRV
   CERTCO~1
    X86
  CONFIG
*/
///////////////////////////////////
#include <iostream>
using namespace std;
int main(){
	string input;
	int cases;
	cin>>cases;
	for(; cases ; cases--){
		cin>>input;
	}
}