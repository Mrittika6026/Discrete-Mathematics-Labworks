#include<bits/stdc++.h>
using namespace std;

bool prime(long long n)
{
    if(n<=1)
        return false;
    else
        for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}

long long mod(long long b, long long n, long long m)
{
    long long x=n;
    long long val[32];
    long long i=0,j=0;
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
    return result;
}

bool result(long long n)
{
    for(long long i=2;i<n;i++)
    {
        if(__gcd(i,n)==1)
        {
             if(mod(i,n-1,n)!= 1)
                return false;
        }
    }
    return true;
}

int main()
{
    long long n;
    cout<<"enter n:";
    cin>>n;

    if(prime(n))
        cout<<"Invalid input"<<endl;

    if(!prime(n))
    {
        if(result(n))
            cout<<"Carmicheal number";
        else
            cout<<"Non-Carmicheal number";
    }
}

