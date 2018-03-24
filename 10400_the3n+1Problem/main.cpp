#include <iostream>

using namespace std;

int check_route(unsigned int asd)
{
    unsigned long long int a = asd ;
    //cout<<"A="<<a<<":";
    int temp_route=1;
    while(a>1)
    {
        temp_route++;
        if(a%2==0)
        {
            a/=2;
        }
        else
        {
            a = 3 * a + 1 ;
        }
        //cout<<a<<" ";
    }
    //cout<<"End"<<endl;
    return temp_route;
}

int main()
{
    unsigned int input_head,input_tail;
    while((cin>>input_head>>input_tail)!=0 && (input_head>0) && (input_tail<1000000))
    {
        int max_route=0;
        cout<<input_head<<" "<<input_tail<<" ";
        if(input_tail < input_head)
        {
            int temp = input_head;
            input_head = input_tail;
            input_tail = temp;
        }
        for(; input_head<= input_tail; input_head++)
        {
            int temp_route = check_route( input_head);
            if(temp_route>max_route)
            {
                max_route = temp_route;
            }
        }
        cout<<max_route<<endl;
    }
}
