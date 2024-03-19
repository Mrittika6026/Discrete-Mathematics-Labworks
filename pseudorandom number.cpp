#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,m,x0,c;
    cout<<"Enter n,m a,c,x0 respectively"<<endl;
    cin>>n>>m>>a>>c>>x0;
    vector <int >x;
    x.push_back(x0);


    if((a>=0 && a<m) && (c>=0 && c<m) && (x0>=0 && x0<m))
    {
        for(int i=0;i<n;i++)
        {
            x0 = (x0*a + c)%m;
            x.push_back(x0);
        }
        for(int i=0;i<x.size();i++)
            cout<<x[i]<<",";
    }
    else
        cout<<"Invalid input"<<endl;
}

