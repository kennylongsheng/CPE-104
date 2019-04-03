/**
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int sets,num,n,i;
    double p,pi;

    cin>>sets;
    for(num = 0 ; num < sets ; num++)
    {
        cin>>n>>p>>i;
        if(p<0.00001)
        {
            cout<<"0.0000"<<endl;
        }
        else
        {
            pi=pow(1-p,i-1)*p/(1-pow(1-p,n));
            cout.precision(4);
            cout<<pi<<endl;
        }
    }
    return 0;
}
**/
#include <stdio.h>
#include <math.h>
int main() {
	int s,n,i;
	double p;
	for (scanf("%d",&s);s;s--) {
		scanf("%d%lf%d",&n,&p,&i);
		if (p) printf("%.4lf\n", p*pow(1-p,i-1)/(1.0-pow(1-p,n)) );
		else puts("0.0000");
	}
}
