#include<bits/stdc++.h>
using namespace std;
long long val[32];

int main()
{
    cout<<"enter 3 numbers:";
    long long b,n,m,x,a,c,i=0,j;
    cin>>b>>n>>m;
    x=n;
    while(x!=0)
    {
        val[i] = x%2;
        x=x/2;
        i++;
    }
    long long result = 1;
    long long pow = b%m;
    for(j=0;j<i;j++)
    {
        if(val[j] ==1)
        {
            result = (result*pow)%m;
        }
        pow = (pow*pow)%m;
    }
    cout<<result;

}
