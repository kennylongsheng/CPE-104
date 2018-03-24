#include <iostream>

using namespace std;

int main()
{
    int test_case;
    while(cin>>test_case!=0 && test_case<21)
    {
        //start test case,every things should be in next function.
        for(int loop1 = 0;loop1<test_case;loop1++)
        {
            int m,n,q;
            cin>>m>>n>>q;
            //printout inputs
            cout<<m<<" "<<n<<" "<<q<<endl;
            //check the term q<21 && m <100 && n<100
            if(q>=21)
            {
                cout<<"Q is larger than 21, so we will end this programme";
                return 1;
            }
            if(m>100 || n>100)
            {
                cout<<"M or N is larger than 100, so we will end this programme";
                return 1;
            }
            char map_of_char[m][n];
            for(int loop2 = 0; loop2 < m ; loop2++)
            {
                cin.ignore();
                for(int loop3 = 0 ;loop3<n;loop3++)
                {
                    cin.get(map_of_char[loop2][loop3]);
                }
                //cout<<map_of_char[loop2]<<endl<<endl;
            }
            for(int loop3 = 0 ; loop3 < q ; loop3++)
            {
                int r,c;
                cin>>r>>c;
                //find radius
                char compare_char = map_of_char[r][c];
                int radius_serious = -1;
                bool con_or_nt=true;
                for(int radius = 0; (r+radius<m) && (r - radius>=0) && (c+radius<n) && (c-radius>=0);radius++)
                {
                    int check_top = r - radius; int check_bottom =r+radius;int check_left = c-radius;int check_right = c+radius;
                    //check how is the length
                    //cout<<radius<<":"<<check_bottom-check_top<<","<<check_right-check_left<<endl;
                    int length_temp = check_right-check_left+1;
                    for(int x = 0 ; x < length_temp && con_or_nt== true ; x++)
                    {
                        for(int y = 0;y < length_temp && con_or_nt== true ; y++)
                        {
                            int temp_x = check_left+x;
                            int temp_y = check_top+y;
                            //cout<<"::"<<temp_y<<"r"<<temp_x<<"c"<<endl;
                            if((map_of_char[temp_y][temp_x])!= compare_char)
                            {
                                radius_serious = radius-1;
                                con_or_nt =  false;
                            }
                        }
                    }
                    //cout<<radius_serious;
                    if( ((r+radius+1>=m) || (r - radius -1<0) || (c+radius+1>=n) || (c-radius-1<0) )&& con_or_nt == true)
                    {
                        radius_serious = radius;
                        //cout<<"0";
                    }
                    //cout<<radius_serious;
                }
                int most_length = (2*radius_serious)+1;
                cout<<most_length<<endl;
            }
        }
    }
    return 0;
}
