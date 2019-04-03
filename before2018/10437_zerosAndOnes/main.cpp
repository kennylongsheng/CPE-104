#include <iostream>
#define char_long 100000000
using namespace std;

int main()
{
    char characters[char_long];
    int i,j,loopTestCase,howManyTestCase,temp,YorN=1,caseInput=0;
    while(cin.get(characters,char_long,'\n') != 0)
    {
        cout<<"Case "<<++caseInput<<":"<<endl;
        cin>>howManyTestCase;
        for(loopTestCase=0;loopTestCase<howManyTestCase;loopTestCase++)
        {
            cin>>i>>j;
            if(j<i)
            {
                temp = j ; j = i ; i = temp ;
            }
            char temp_char = characters[i];
            for(;i<=j;i++)
            {
                if(characters[i]!= temp_char)
                {
                    YorN = 0;
                    break;
                }
                else
                {
                    YorN = 1;
                }
            }
            if(YorN == 1)
            {
                cout<<"Yes"<<endl;
            }
            else if(YorN ==0)
            {
                cout<<"No"<<endl;
            }
        }
        cin.ignore();
    }
    return 0;
}
