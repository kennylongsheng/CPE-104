#include <iostream>

using namespace std;

int main()
{
    int S, D;
    while(cin>>S>>D)
    {
        int area = 0 , ans = S;
        for(int heigh = 1 ; area < D ;heigh++)
        {
            int btm = S+heigh-1;
            area = ((S + btm) * heigh )/2;
            ans = btm;
        }
        cout<<ans<<endl;
    }
    return 0;
}
