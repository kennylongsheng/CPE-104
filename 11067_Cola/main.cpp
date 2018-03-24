#include <iostream>

using namespace std;

int calculate(int bottle_buy , int bottle_borrow)
{
    int count = 0;
    count = bottle_buy;
    bottle_buy += bottle_borrow;
    while(bottle_buy>=3)
    {
        int bottle_buy_temp = bottle_buy;
        count+=(bottle_buy_temp/3);
        bottle_buy = (bottle_buy_temp/3) + (bottle_buy_temp%3);
    }
    //cout<<"The empty bottle left is: "<<bottle_buy<<endl;
    //cout<<"The buyer drank "<<count<<" bottle of cola."<<endl;
    if(bottle_buy >= bottle_borrow)
    {
        return count;
    }
    else
    {
        return -1;
    }
    return 0;
}

int main()
{
    int bottle_buy , bottle_drank ,temp;
    while(cin>>bottle_buy)
    {
        bottle_drank = calculate(bottle_buy,0);
        temp = calculate(bottle_buy,1);
        if(bottle_drank < temp);
        {
            bottle_drank = temp;
        }
        temp = calculate(bottle_buy,2);
        if(bottle_drank < temp)
        {
            cout<<temp;
        }
        else
        {
            cout<<bottle_drank<<endl;
        }
    }
    return 0;
}
