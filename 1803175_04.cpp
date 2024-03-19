#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    long long m,result=0;
    cin>>n>>m;
    for(int i=0;i<n.length();i++)
        result = (result*10 + (int) (n[i]-'0'))%m;
    cout<<result;
}
