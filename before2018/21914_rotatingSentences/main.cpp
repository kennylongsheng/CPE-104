#include <iostream>
#include <string.h>
#define N 100

using namespace std;

int main()
{
    char strings[N][N+1];
    for(int i = 0 ; i < N ; i++)
    {
        for(int j = 0 ; j <= N ; j++)
        {
            strings[i][j] = 0;
        }
    }
    int stringMax = 0 , howManyStrings = 0 , stringLen[N] ={0} ;
    char stringTemp[N+1];
    for(howManyStrings = 0 ; cin.getline(stringTemp , N+1 , '\n') ; howManyStrings++)
    {
        stringLen[howManyStrings] = strlen(stringTemp);
        if(stringLen[howManyStrings] > stringMax)
        {stringMax = stringLen[howManyStrings];}
        for(int i = 0 ; i < stringMax ; i++)
        {
            if(i < stringLen[howManyStrings])
            {
                strings[howManyStrings][i] = stringTemp[i];
            }
            else
            {
                strings[howManyStrings][i] = ' ';
                stringLen[howManyStrings]++;
            }
        }
    }
    for(int i = 0 ; i < stringMax ; i++)
    {
        for(int j = howManyStrings-1 ; j >= 0 ; j-- )
        {
            if(i < stringLen[j])
            {cout<<strings[j][i];}
        }
        if( i != stringMax-1 )
        {
            cout<<endl;
        }
    }
    return 0;
}
