#include <stdio.h>
#include <stdlib.h>
#define MAX_NUM 1000

int main()
{
    long long int userInput1,userInput2,pointer=0,howManyNumber;
    long long int num[MAX_NUM];
    while(!feof(stdin))
    {
        scanf("%lld %lld",&userInput1,&userInput2);
        if(userInput1>userInput2)
        {
            num[pointer++] = userInput1-userInput2;
        }
        else
        {
            num[pointer++] = userInput2-userInput1;
        }
        howManyNumber = pointer-1;
    }
    system("cls");
    for(pointer=0;pointer<howManyNumber;pointer++)
    {
        printf("%lld\n",num[pointer]);
    }
    return 0;
}
