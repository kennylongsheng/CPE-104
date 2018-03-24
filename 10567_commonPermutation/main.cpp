#include <iostream>
#include <string>
using namespace std;

int main()
{
    string tempA,tempB;
    while(cin>>tempA>>tempB)
    {
        int stringA[123] = {0},stringB[123] = {0};
        for(int i = 0 ; i < tempA.length() ; i++)
        {
            stringA[tempA[i]]++;
        }
        for(int i = 0 ; i < tempB.length() ; i++)
        {
            stringB[tempB[i]]++;
        }
        for(char i = 'a' ; i <= 'z' ; i++)
        {
            if((stringA[i]>0)&&(stringB[i]>0))
            {
                int minimun = (( stringA[i]<stringB[i] )? stringA[i] : stringB[i] );
                for(int j = 0 ; j < minimun ; j++)
                {
                    cout<<i;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
