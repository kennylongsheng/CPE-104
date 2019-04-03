#include <iostream>
#include <queue>
#include <set>

using namespace std;

queue<int> numberList;
set<int> numberVisited;

void queuClear()
{
    while(numberList.size())
    {
        numberList.pop();
    }
    numberVisited.clear();
}

int main()
{
    int howManyInput , temp;
    while(cin>>howManyInput)
    {
        queuClear();
        for(int i = 0 ; i < howManyInput ; i++)
        {
            cin>>temp;
            numberList.push(temp);
        }
        while(numberList.size() > 1)
        {
            int numFront = numberList.front();
            numberList.pop();
            if((numFront - numberList.front())>0 && (numFront - numberList.front())<howManyInput)
            {
                numberVisited.insert(numFront - numberList.front());
            }
            else if((numberList.front() - numFront)>0 && (numberList.front() - numFront)<howManyInput)
            {
                numberVisited.insert(numberList.front() - numFront);
            }
        }
        int setSize = numberVisited.size();
        if(setSize == howManyInput-1)
        {cout<<"Jolly"<<endl;}
        else
        {cout<<"Not jolly"<<endl;}
    }
    return 0;
}
