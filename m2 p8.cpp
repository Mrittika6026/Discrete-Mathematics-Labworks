#include<bits/stdc++.h>
using namespace std;
int main()
{
    double i=0;
    double s=0;
    while(i<20)
    {
        s+=(1/pow(2,i));
        i++;
        cout<<s<<endl;
    }
}
