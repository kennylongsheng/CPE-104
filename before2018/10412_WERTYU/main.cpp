#include <iostream>
#include <string>

using namespace std;

char keyboardLayout[4][13]={{'`','1','2','3','4','5','6','7','8','9','0','-','='},
                          {'Q','W','E','R','T','Y','U','I','O','P','[',']','\\'},
                          {'A','S','D','F','G','H','J','K','L',';','\''},
                          {'Z','X','C','V','B','N','M',',','.','/'}};

char decode(char temp)
{
    if(temp == '\0' || temp == '\n')
    {
        cout<<endl;
    }
    for(int y = 0 ; y < 4 ; y++)
    {
        for(int x = 0 ; x < 13 ; x++ )
        {
            if(temp == keyboardLayout[y][x])
            {
                return keyboardLayout[y][x-1];
            }
        }
    }
    return temp;
}

int main()
{
    string userInput;
    while(getline(cin , userInput))
    {
        for(int i = 0 ; i < userInput.size() ; i++)
        {
                cout<<decode(userInput[i]);
        }
        cout<<endl;
    }
    return 0;
}
