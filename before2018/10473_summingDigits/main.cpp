#include <iostream>

using namespace std;

int function_sum(int userInput)
{
    int sum = 0 ;
    if(userInput < 10)
    {
        return userInput;
    }
    else
    {
        userInput = function_sum( userInput/10 ) + userInput%10;
        return userInput;
    }
}

int main()
{
    int userInput;
    while(cin>>userInput && userInput!=0)
    {
        while(userInput>9)
        {
            userInput = function_sum(userInput);
        }
        cout<<userInput<<endl;
    }
    return 0;
}
