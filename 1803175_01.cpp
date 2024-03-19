#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,m;
    cin>>a>>b>>c>>m;
    long long x=1;
    x= ((((a%m)*(b%m))%m)*(c%m))%m;
    cout<<x;
}
