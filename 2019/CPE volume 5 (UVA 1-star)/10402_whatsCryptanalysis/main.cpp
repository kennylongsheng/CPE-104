#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	int alpCount[128] = {0},len = 0,temp, num;
	char c;
    cin>>num;
    cin.get();
    for(int loop = 0 ; loop < num ; loop++)
    {
    	while(cin.get(c) && c != '\n'){
    		temp = toupper(c);
        	alpCount[temp]++;
        	if(alpCount[temp]>len){
        		len = alpCount[temp];
        	}
    	}
    }
    while(len)
    {
        for(c='A' ; c <='Z' ; c++)
        {
            if(alpCount[c]==len)
            {
                cout<<c<<" "<<alpCount[c]<<endl;
            }
        }
        len--;
    }
    return 0;
}
