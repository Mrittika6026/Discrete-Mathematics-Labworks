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
    unsigned long long n,r,p,c;

    cout<<"Enter n,r respectively: ";
    cin>>n>>r;

    p = fact(n)/fact(n-r);
    c = fact(n)/(fact(r)*fact(n-r));

    cout<<"The r-permutation is = "<<p<<endl;
    cout<<"The r-combination is = "<<c<<endl;

    return 0;

}
