#include <iostream>

using namespace std;
char chart[6][8] = {{'B','F','P','V',0,0,0,0},{'C','G','J','K','Q','S','X','Z'},{'D','T',0,0,0,0,0,0},{'L',0,0,0,0,0,0,0},{'M','N',0,0,0,0,0,0},{'R',0,0,0,0,0,0,0}};

int check_soundex(char checkingUsage)
{
    for(int x = 0; x < 6 ; x++)
    {
        for(int y = 0 ; y < 8 && chart[x][y] !=0 ; y++)
        {
            if(checkingUsage == chart[x][y])
            {
                return x+1;
            }
        }
    }
    return 0;
}

int main()
{
    char userInput[20] = {0};
    while((cin.getline(userInput,20,'\n'))!=0)
    {
        char checkingUsage;
        int temp_digit , cout_digits_array[20] , index_array = 0;
        for(int loop1 = 0 ; loop1 < 20 && userInput[loop1] != 0 ; loop1++ )
        {
            checkingUsage = userInput[loop1];
            temp_digit = check_soundex(checkingUsage);
            if(index_array == 0 || temp_digit != cout_digits_array[index_array-1])
            {
                cout_digits_array[index_array++]  = temp_digit ;
            }
        }
        cout_digits_array[index_array] = '\n';
        for(int i = 0 ; cout_digits_array[i] != '\n' ; i++)
        {
            if(cout_digits_array[i] != 0)
            {
                cout<<cout_digits_array[i];
            }
        }
        cout<<endl;
        for(int i = 0 ; i < 20 ; i++)
        {
            userInput[i] = 0;
        }
    }
    return 0;
}
