#include <iostream>
#define MAX_NUMBER 1000
using namespace std;

int digits[MAX_NUMBER];

int check_digits()
{
    int i,j=1;
    for(i=9; (digits[0]!=1); i--)
    {
        if(i==1)
        {
            return 0;
        }
        if(digits[0]<10)
        {
            digits[j] = digits[0];
            return j;
        }
        else if(((digits[0])%i)==0)
        {
            digits[j++] = i;
            digits[0] /= i;
            i=9;
        }
    }
    return --j;
}
void print_digits(int a)
{
    int i;
    for(i=a; i>0; i--)
    {
        cout<<digits[i];
    }
    cout<<endl;
}

int main()
{
    int howManyInput,howManyDigits,i;
    cin>>howManyInput;
    for(i=0; i<howManyInput; i++)
    {
        cin>>digits[0];
        if(digits[0]==1)
        {
            cout<<"1"<<endl;
        }
        else
        {
            howManyDigits = check_digits();
            if(howManyDigits!=0)
            {
                print_digits(howManyDigits);
            }
            else
            {
                cout<<"-1"<<endl;
            }
        }

    }
    return 0;
}
