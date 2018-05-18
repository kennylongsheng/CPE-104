#include <iostream>
#include <string>
#define singleint 1001

using namespace std;

int finger[15][10]={{0,0,0,0,0,0,0,0,0,0},//DEFAULT
                    {0,1,1,1,0,0,1,1,1,1},//c
                    {0,1,1,1,0,0,1,1,1,0},//d
                    {0,1,1,1,0,0,1,1,0,0},//e
                    {0,1,1,1,0,0,1,0,0,0},//f
                    {0,1,1,1,0,0,0,0,0,0},//g
                    {0,1,1,0,0,0,0,0,0,0},//a
                    {0,1,0,0,0,0,0,0,0,0},//b
                    {0,0,1,0,0,0,0,0,0,0},//C
                    {1,1,1,1,0,0,1,1,1,0},//D
                    {1,1,1,1,0,0,1,1,0,0},//E
                    {1,1,1,1,0,0,1,0,0,0},//F
                    {1,1,1,1,0,0,0,0,0,0},//G
                    {1,1,1,0,0,0,0,0,0,0},//A
                    {1,1,0,0,0,0,0,0,0,0},//B
                    };

char fingerConv[14]={'c','d','e','f','g','a','b','C','D','E','F','G','A','B'};

int convertFinger(char userinput)
{
    for(int i = 0 ; i < 14 ; i++)
    {
        if(userinput == fingerConv[i])
        {
            return (i+1);
        }
    }
    return 0;
}

int main()
{
    string userInput;
    int howManyInput;
    cin>>howManyInput;
    cin.ignore();
    for(int i = 0 ; i < howManyInput ; i++)
    {
        int collectArray[10] = {0};
        getline(cin,userInput);
        for(unsigned int length = 0 ; length < userInput.size() ; length++)
        {
            int string1 , string2;
            if(length == 0)
            {
                string1 = 0 ;
                string2 = convertFinger(userInput[length]);
            }
            else
            {
                string1 = convertFinger(userInput[length-1]);
                string2 = convertFinger(userInput[length]);
            }
            for(int fingerCount = 0 ; fingerCount < 10 ;fingerCount++)
            {
                if((finger[string1][fingerCount] == 0) && (finger[string2][fingerCount] == 1))
                {
                    collectArray[fingerCount]++;
                }
            }
        }
        bool zero=false;
        for(int ik = 0 ; ik < 10 ; ik++)
        {
            if(collectArray[ik]==0)
            {
                zero=true;
            }
            else
            {
                zero=false;
                break;
            }
        }
        if(!zero)
        {
            for(int ij = 0 ; ij < 10 ; ij++)
            {
                cout<<collectArray[ij]<<" ";
            }

            cout<<endl;
        }
    }
    return 0;
}
