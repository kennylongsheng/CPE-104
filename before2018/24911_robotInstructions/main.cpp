#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int howManyRobot;
    cin>>howManyRobot;
    for(int loop1 = 0 ; loop1 < howManyRobot ; loop1++)
    {
        int howManyInstruction , placement = 0;
        cin>>howManyInstruction;
        int temp_array[howManyInstruction];
        for(int loop2 = 0 ; loop2 < howManyInstruction ;loop2++ )
        {
            string temp_string;
            cin>>temp_string;
            if(temp_string[0] == 'L')
            {
                temp_array[loop2] = -1;
                placement-=1;
            }
            else if(temp_string[0] == 'R')
            {
                temp_array[loop2] = 1;
                placement+=1;
            }
            else
            {
                cin>>temp_string;
                int same_as;
                cin>>same_as;
                temp_array[loop2] = temp_array[same_as-1];
                placement+=temp_array[same_as-1];
            }
            //cout<<"CHECK: "<<placement<<endl;
        }
        cout<<placement<<endl;
    }
    return 0;
}
