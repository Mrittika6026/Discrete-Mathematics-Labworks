#include<iostream>
using namespace std;
int main()
{
    int p,q,r,user_input;
    bool result[2][2][2], temp[2][2];
    cout << "Give User input(0 or 1): ";
    cin >>user_input;
    for(p=0; p<=1; p++)
    {
        for(q=0; q<=1; q++)

        {
// not(p^q) value:
            if(p==1 && q==1)
            {
                temp[p][q]=0;
            }
            else
            {
                temp[p][q]=1;
            }
        }
    }
    for(p=0; p<=1; p++)
    {
        for(q=0; q<=1; q++)
        {
            for(r=0; r<=1; r++)
            {
                if((temp[p][q]==1) && r==1)
                {
                    result[p][q][r]=1;
                }
                else
                {
                    result[p][q][r]=0;
                }
            }
        }
    }
//printing result:
    cout << "p" << "\t" << "q" << "\t" << "r" << "\t" <<
         "((p^q)!)^r" << endl;
    for(p=0; p<=1; p++)
    {
        for(q=0; q<=1; q++)
        {
            for(r=0; r<=1; r++)
            {
                if(result[p][q][r]==user_input)
                {
                    cout << p << "\t" << q << "\t" <<

                         r << "\t" << result[p][q][r] << endl;
                }
            }
        }
    }
}
