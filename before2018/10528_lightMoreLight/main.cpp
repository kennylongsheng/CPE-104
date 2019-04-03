#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double userInput;
    while(cin>>userInput && userInput!=0)
    {
        if(fmod(sqrt(userInput) , 1.0) == 0.0)
        {cout<<"yes"<<endl;}
        else
        {cout<<"no"<<endl;}
    }
    return 0;
}
