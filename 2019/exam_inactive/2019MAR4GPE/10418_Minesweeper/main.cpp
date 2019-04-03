#include <iostream>
#define MAXARR 100
using namespace std;

int field[MAXARR][MAXARR] = {0};

void initArr(){
	for(int Row = 0 ; Row < MAXARR ; Row++ ){
		for(int Column = 0 ; Column < MAXARR; Column++ ){
			field[Row][Column]=0;
		}
	}
}

void isMine(int fixRow , int fixColumn, int currentRow, int currentColumn){
	field[currentRow][currentColumn] = -1;
	int preR = currentRow-1 , preC = currentColumn-1 , nexR = currentRow+1 , nexC = currentColumn+1;
	if(preR >= 0 && preR < fixRow){
		if(preC >= 0 && preC <fixColumn && field[preR][preC] != -1){field[preR][preC]++;}
		if(field[preR][currentColumn] != -1){field[preR][currentColumn]++;}
		if(nexC >= 0 && nexC <fixColumn && field[preR][nexC] != -1){field[preR][nexC]++;}
	}
	if(preC >= 0 && preC <fixColumn && field[currentRow][preC] != -1){field[currentRow][preC]++;}
	if(nexC >= 0 && nexC <fixColumn && field[currentRow][nexC] != -1){field[currentRow][nexC]++;}
	if(nexR >= 0 && nexR < fixRow){
		if(preC >= 0 && preC <fixColumn && field[nexR][preC] != -1){field[nexR][preC]++;}
		if(field[nexR][currentColumn] != -1){field[nexR][currentColumn]++;}
		if(nexC >= 0 && nexC <fixColumn && field[nexR][nexC] != -1){field[nexR][nexC]++;}
	}
}

int main(){
	int r , c ,count = 0;
	char check;
	while(1){
		cin>>r>>c;
		if(r==0 && c==0){
			return 0;
		}
		else if(count>0){
			cout<<endl;
		}
		cin.get();
		initArr();
		for(int Row = 0 ; Row < r ; Row++ ){
			for(int Column = 0 ; Column < c; Column++ ){
				cin.get(check);
				if(check == '*'){
					isMine(r,c,Row,Column);
				}
				else if(check == '.'){;}
			}
			cin.get();
		}
		cout<<"Field #"<<++count<<":"<<endl;
		for(int Row = 0 ; Row < r ; Row++ ){
			for(int Column = 0 ; Column < c; Column++ ){
				if(field[Row][Column] == -1){
					cout<<"*";
				}
				else{
					cout<<field[Row][Column];
				}
			}
			cout<<endl;
		}
	}
	return 0;
}