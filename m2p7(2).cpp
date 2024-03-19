#include<bits/stdc++.h>
using namespace std;
int main()
{
    int u,l,a,r;
    double sum=1;
    cout<<"enter lower limit:";
    cin>>l;
    cout<<endl;
    cout<<"enter upper limit:";
    cin>>u;
    cout<<endl;
    cout<<"enter a:";
    cin>>a;
    cout<<endl;
    cout<<"enter ratio:";
    cin>>r;
    cout<<endl;
    for(int i=l;i<=u;i++)
    {
        sum*=a*(pow(r,i));
    }
    cout<<"summation= "<<sum<<endl;
}
