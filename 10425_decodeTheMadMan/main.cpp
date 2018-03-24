#include <iostream>
#include <cctype>

using namespace std;

char keyboard[4][14] = {"`1234567890-=","qwertyuiop[]\\","asdfghjkl;'","zxcvbnm,./"};

char find_keyboard(char temp);

int main()
{
    char temp;
    while(cin.get(temp))
    {
        cout<<find_keyboard( tolower(temp) );
    }
}

char find_keyboard(char temp)
{
    for(int i = 0 ; i < 4 ; i++)
    {
        for(int j = 2 ; j < 14 ; j++)
        {
            if( temp == keyboard[i][j])
            {
                return (keyboard[i][j-2]);
            }
        }
    }
    return temp;
}
