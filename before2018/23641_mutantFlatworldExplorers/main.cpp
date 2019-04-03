#include <iostream>
#define longestTable 51
#define longestArray 101

using namespace std;

char orientation[4] = {'N' , 'E' , 'S' , 'W'};
int orienOpera_X[4] = {0 ,1 , 0 ,-1};
int orienOpera_Y[4] = {1 ,0 , -1, 0};
char map[longestTable][longestTable] = {0};

int check_input_orientation(char userInput)
{
    if(userInput == 'N')
    {
        return 0;
    }
    else if(userInput == 'E')
    {
        return 1;
    }
    else if(userInput == 'S')
    {
        return 2;
    }
    else if(userInput == 'W')
    {
        return 3;
    }
    else
    {
        cout<<"ERROR"<<endl;
        return -1;
    }
}

int main()
{
    int bound_X , bound_Y , initial_X , initial_Y , initial_orientation;
    char initial_orientation_char;
    cin>>bound_X>>bound_Y;
    while(cin>>initial_X>>initial_Y>>initial_orientation_char)
    {
        initial_orientation = check_input_orientation(initial_orientation_char);
        if(initial_orientation == -1)
        {return 0;}
        char orderList[longestArray] ={0};
        cin>>orderList;
        for(int i = 0 ; i <= 100 ; i++)
        {
            if((orderList[i] == 'F')&&(map[initial_X][initial_Y] != 0)&&(check_input_orientation(map[initial_X][initial_Y]) == initial_orientation))
            {
                continue;
            }
            if(orderList[i] == '\0')
            {
                cout<<initial_X<<" "<<initial_Y<<" "<<orientation[initial_orientation]<<endl;
                break;
            }
            else if(orderList[i] == 'R')
            {
                //cout<<"turn right"<<endl;
                initial_orientation+=1;
            }
            else if(orderList[i] == 'L')
            {
                //cout<<"turn left"<<endl;
                initial_orientation-=1;
            }
            else if(orderList[i] == 'F')
            {
                //cout<<"walk infront"<<endl;
                int ori_X = initial_X , ori_Y = initial_Y;
                initial_X+=orienOpera_X[initial_orientation];
                initial_Y+=orienOpera_Y[initial_orientation];
                if(initial_X > bound_X || initial_Y > bound_Y)
                {
                    map[ori_X][ori_Y] = orientation[initial_orientation];
                    cout<<ori_X<<" "<<ori_Y<<" "<<orientation[initial_orientation]<<" LOST"<<endl;
                    break;
                }
            }
            if(initial_orientation<0)
            {
                initial_orientation = 3;
            }
            else if(initial_orientation>3)
            {
                initial_orientation = 0;
            }
        }

    }
    return 0;
}
