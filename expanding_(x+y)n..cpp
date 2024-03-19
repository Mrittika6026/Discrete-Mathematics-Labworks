#include<bits/stdc++.h>
using namespace std;
long long fact(long long num)
{
         if(num==1 || num==0)
        {
              return 1;
        }
        else
        {
             return num * fact(num-1);
        }
}

long long co(long long n,long long r)
{
     long long p = fact(n);
     long long q = fact(r);
     long long s = fact(n-r);
    return p/(q*s);
}

int main()
{
    long long n,result=0;
    cout<<"Enter n: ";
    cin>>n;
    for (long long i=0;i<=n;i++)
    {
        result = co(n,i);
        if(i==0)
            cout<<"x^"<<n-i;
        else if(i==n)
            cout<<"y^"<<i;
        else
            cout<<result<<"x^"<<n-i<<"y^"<<i;
        if(i != n)
            cout<<"+";
    }
    return 0;
}
