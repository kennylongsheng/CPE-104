#include <iostream>
#define MAX_NUM 1000
using namespace std;
int check_decimal(int M)
{
    int x1[MAX_NUM]={0} , i , B1 = 0 ;
    for(i = 0 ; M > 1 ; i++ )
    {
        x1[i] = M%2;
        M = ((M - (M%2)) / 2);
    }
    x1[i] = M ;x1[i+1] = 2;
    for(int i = 0 ; x1[i]!= 2 ; i++)
    {
        //cout<<x1[i];
        if(x1[i] == 1)
        {
            B1 ++;
        }
    }
    //cout<<"AAA"<<B1<<endl;
    return B1;
}
int check_hexademical(int M)
{
    int i,j , B2 = 0;
    for(i = 0 ; M>0 ; i++)
    {
        int temp = M%10;
        M = ((M - temp) / 10);
        //cout<<"M:"<<M;
        //cout<<"temp:"<<temp<<endl;
        for(j=0;temp>0;j++)
        {
          //  cout<<temp<<endl;
            int module = temp%2;
            if(module == 1)
            {
                B2++;
            }
            temp = (temp - module) / 2;
            //cout<<temp<<endl;
        }
    }
    return B2;
}
int main()
{
    int howManyInput;
    for(;(cin>>howManyInput)!=0;)
    {
        for(int loop1 = 0 ; loop1 < howManyInput ; loop1++)
        {
            int numberN;
            cin>>numberN;
            cout<<check_decimal(numberN)<<" ";
            cout<<check_hexademical(numberN)<<endl;

        }
    }
    return 0;
}
