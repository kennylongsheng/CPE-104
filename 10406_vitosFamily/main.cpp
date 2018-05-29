#include <iostream>
#define infinite 10000000
using namespace std;

int main()
{
    int testCase , relatives;
    cin>>testCase;
    for(int loop1 = 0 ; loop1 < testCase ; loop1++)
    {
        cin>>relatives;
        int arrayInput[relatives], sumOptimized = infinite ;
        for(int loop2 = 0 ; loop2 < relatives ; loop2++)
        {
            cin>>arrayInput[loop2];
        }
        for(int loop2 = 0 ; loop2 < relatives; loop2 ++)
        {
            int tempSum = 0;
            for(int loop3 = 0 ; loop3 < relatives && tempSum<sumOptimized ; loop3++)
            {
                tempSum += (arrayInput[loop2] > arrayInput[loop3])? arrayInput[loop2]-arrayInput[loop3]:arrayInput[loop3]-arrayInput[loop2];
            }
            if(tempSum < sumOptimized)
            {sumOptimized = tempSum;}
        }
        cout<<sumOptimized<<endl;
    }
    return 0;
}
