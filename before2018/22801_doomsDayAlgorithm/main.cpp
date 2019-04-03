#include <iostream>

using namespace std;

const int monthList[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
const char weekList[7][10] = {"Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" , "Saturday" , "Sunday" };

int calculate(int month , int day)
{
    int totalDays= 4;
    for(int i = 0 ; i < month-1 ; i++)
    {
        totalDays+=monthList[i];
    }
    totalDays+=day;
    return totalDays%7;
}

int main()
{
    int numberOfTestCase , month , day;
    cin>>numberOfTestCase;
    for(int loop1 = 0 ; loop1 < numberOfTestCase ; loop1++)
    {
        cin>>month>>day;
        cout<<weekList[calculate(month , day)]<<endl;
    }
}
