#include <iostream>

using namespace std;

int main()
{
    char temp , k=0;
    while(cin.get(temp))
    {
        if(temp == '"')
        {
            if(k%2)
            {
                cout<<"\'\'";
            }
            else
            {
                cout<<"\`\`";
            }
            k++;
        }
        else
        {
            cout<<temp;
        }
    }
    return 0;
}
