#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,r;
    cin>>n>>r;
    int num[n],num1[r];
    for(int i=1;i<=n;i++)
        cin>>num[i];
    for(int i=1;i<=r;i++)
        cin>>num1[i];
    int i=r;
    while(num1[i]==n-r+i)
    {
        i=i-1;
    }
    num1[i] = num1[i] + 1;
    for(int j=i+1;j<=r;j++)
    {
        num1[j] = num1[i] + j - i;
    }
    for(int i=1;i<=r;i++)
    {
        cout<<num1[i];
    }
    return 0;


}
