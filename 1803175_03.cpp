#include<bits/stdc++.h>
using namespace std;

bool prime[1000000];
vector<long long>result;

void display(int p)
{
    for(int i=2;i*i<=p;i++)
    {
        if(prime[i] == 0)
        {
            for(int j=i*2;j<=p;j=j+i)
            {
                prime[j] = 1;
            }
        }
    }
    for(int i=2;i<=p;i++)
    {
        if(!prime[i])
        {
            cout<<i;
        }
    }
}

int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    display(n);
    return 0;
}
