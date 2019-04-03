#include <iostream>

using namespace std;

int main()
{
    int howManyCompare , numOfTrain ;
    cin>>howManyCompare;
    for(int loop1 = 0 ; loop1 < howManyCompare ; loop1++)
    {
        cin>> numOfTrain ;
        int arrayTrain[numOfTrain],swapTime = 0;
        for(int loopUserInput = 0 ; loopUserInput < numOfTrain ; loopUserInput++)
        {
            cin>>arrayTrain[loopUserInput];
        }
        for(int i = 0 ; i < numOfTrain-1 ; i ++)
        {
            for( int j = 0 ; j < numOfTrain-1 ; j++)
            {
                if( arrayTrain[j] > arrayTrain[j+1] )
                {
                   int temp = arrayTrain[j];arrayTrain[j] = arrayTrain[j+1];arrayTrain[j+1] = temp;swapTime++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<swapTime<<" swaps."<<endl;
    }
    return 0;
}
