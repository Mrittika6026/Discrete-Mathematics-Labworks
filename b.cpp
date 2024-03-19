#include<bits/stdc++.h>
using namespace std;

long long x,y,z;

long long modular_ex()
{
    long long r=1;
    while(y>0)
    {
        if(y%2 == 1)
            r = (r*x)%z;
        y = y>>1;
        x = (x*x)%z;
    }
    return r;
}

int main()
{
    cout<<"Enter b,n,m:"<<endl;
    cin>>x>>y>>z;
    cout<<modular_ex();
    return 0;
}
