#include <iostream>

#define MAX_NUM 100

using namespace std;

int remain(int n,int m)
{
    if(n%m==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n,m,i,j,a[MAX_NUM],print_or_not;
    while((cin>>n)!=0)
    {
        cin >> m ;
        i=1;
        print_or_not=1;
        a[i]=n;
        while(a[i]!=1)
        {
            if((remain(a[i],m))==1)
            {
                a[i+1]=a[i]/m;
                i++;
            }
            else
            {
                print_or_not=0;
                cout<<"Boring!"<<endl;
                break;
            }
        }
        if(print_or_not==1)
        {
            for(j=1; a[j]!=1; j++)
            {
                cout<<a[j]<<" ";
            }
            cout<<"1"<<endl;
        }
        else
        {
            print_or_not=1;
        }

    }

    return 0;
}
