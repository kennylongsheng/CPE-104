#include <iostream>

#define MAXDAY 3650

using namespace std;

int main(){
	int testCase, numPar, numDay;
	cin>>testCase;
	for(int i = 0 ; i < testCase ; i++)
	{
		cin>>numDay>>numPar;
		int table[MAXDAY] = {0}, ans = 0;
		for(int j = 0 ; j < numPar ; j++)
		{
			int temp,day;
			cin>>temp;
			day = temp;
			while(day <= numDay)
			{
				table[day] = 1;
				day+=temp;
			}
		}
		for(int j = 1 ; j <= numDay; j++)
		{
			if(table[j] == 1 && (j-1)%6!=0 && (j-1)%5!=0)
			{
				ans+=1;
			}
		}
		cout<<ans<<endl;
	}	
}
