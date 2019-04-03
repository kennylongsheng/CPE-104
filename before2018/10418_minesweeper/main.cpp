#include <iostream>

using namespace std;

int main()
{
    int userInputRow , userInputColumn,loop1=1;
    while(((cin>>userInputRow>>userInputColumn)!=0 )&&(userInputRow!=0 || userInputColumn!=0))
   {
        string field[userInputRow];
        for(int i=0;i<userInputRow;i++)
        {
            cin>>field[i];
        }
        //check
        if(loop1!=1)
        {
            cout<<endl;
        }
        cout<<"Field #"<<loop1++<<":"<<endl;
        for(int i=0;i<userInputRow;i++)
        {
            for(int j=0;j<userInputColumn;j++)
            {
                if(field[i][j]!='*')
                {
                    int mine_count=0;
                    int i_top = i-1 ;int i_bottom = i+1;int j_left=j-1;int j_right = j+1;
                    if(i_top>=0)
                    {
                        if(j_left>=0)
                        {
                            if(field[i_top][j_left]=='*')
                            {
                                mine_count++;
                            }
                        }
                        if(j_right<userInputColumn)
                        {
                            if(field[i_top][j_right]=='*')
                            {
                                mine_count++;
                            }
                        }
                        if(field[i_top][j]=='*')
                        {
                            mine_count++;
                        }
                    }
                    if(i_bottom<userInputRow)
                    {
                        if(j_left>=0)
                        {
                            if(field[i_bottom][j_left]=='*')
                            {
                                mine_count++;
                            }
                        }
                        if(j_right<userInputColumn)
                        {
                            if(field[i_bottom][j_right]=='*')
                            {
                                mine_count++;
                            }
                        }
                        if(field[i_bottom][j]=='*')
                        {
                            mine_count++;
                        }
                    }
                    if(j_left>=0)
                    {
                        if(field[i][j_left]=='*')
                        {
                            mine_count++;
                        }
                    }
                    if(j_right<userInputColumn)
                    {
                        if(field[i][j_right]=='*')
                        {
                            mine_count++;
                        }
                    }
                    cout<<mine_count;
                }
                else if(field[i][j]=='*')
                {
                    cout<<"*";
                }
            }
                cout<<endl;
        }
   }
}
