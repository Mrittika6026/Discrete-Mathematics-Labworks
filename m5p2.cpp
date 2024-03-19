#include<bits/stdc++.h>
using namespace std;

unsigned long long fact(unsigned long long num)
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

int main()
{
    unsigned long long n,r,npr=1,ncr;
    cout<<"Enter n,r:";
    cin>>n>>r;

    //r-permutation with repetition
    for(int i=1;i<=r;i++)
    {
        npr = npr*n;
    }
    cout<<"r-permutation with repetition is = "<<npr<<endl;

    //r-combination with repetition
    ncr = fact(n+r-1)/(fact(r)*fact(n-1));
    cout<<"r-combination with repetition is = "<<ncr<<endl;

    return 0;
}
