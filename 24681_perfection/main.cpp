#include <iostream>
#include <vector>
using namespace std;
vector <int> numberList;

void calculate(int num);

int main()
{
    int temp;
    while(cin>>temp && temp!=0)
    {
        numberList.push_back(temp);
    }
    cout<<"PERFECTION OUTPUT"<<endl;
    for(int i = 0 ; i < numberList.size() ;i++)
    {
        if(numberList[i]<10000)
        {
        cout<<" ";
            if(numberList[i]<1000)
            {
            cout<<" ";
                if(numberList[i]<100)
                {
                cout<<" ";
                    if(numberList[i]<10)
                    {
                        cout<<" ";
                    }
                }
            }
        }
        cout<<numberList[i]<<"  ";
        calculate(numberList[i]);
    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}

void calculate(int num)
{
    int sum= 0;
    for(int i = num/2 ; i > 0 ; i --)
    {
        if(num%i == 0)
        {
        sum += i;
        }
    }
    if(sum > num)
    {
    cout<<"ABUNDANT";
    }
    else if(sum == num)
    {
    cout<<"PERFECT";
    }
    else if(sum < num)
    {
    cout<<"DEFICIENT";
    }
    cout<<endl;
}

