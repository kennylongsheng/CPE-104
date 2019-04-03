#include <iostream>
#include <cctype>

using namespace std;

int alpCount[256],len;

int main()
{
    char c;
    while(cin>>c)
    {
        len++;
        alpCount[toupper(c)]++;
    }
    while(--len)
    {
        for(c='A' ; c <='Z' ; c++)
        {
            if(alpCount[c]==len)
            {
                cout<<c<<" "<<alpCount[c]<<endl;
            }
        }
    }
    return 0;
}
