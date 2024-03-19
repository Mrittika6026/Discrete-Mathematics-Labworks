#include<bits/stdc++.h>
using namespace std;
long long int arra[1000][1000],arra2[1000][1000];

int main()
{
    long long int count1=0,i,n,a,lower,j,count2=0,temp,count3=0,count4=0,temp2=0,lower2=0;
    vector<long long int>s;
    cout<<"Enter the size of the sequence : ";
    cin>>n;
    cout<<"Enter the values : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a;
        s.push_back(a);
    }
    cout<<endl;

    for(i=0;i<n;i++)
    {
        arra[i][0]=s[i];
        lower=arra[i][0];
        for(j=1+i;j<n;j++)
        {
            if(s[j]>=lower)
            {
                arra[i][j]=s[j];
                lower=arra[i][j];
                count1++;
            }
        }
        if(count1>count2)
       {
           count2=count1;
           temp=i;
       }
       count1=0;

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout<<arra[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    cout<<"The Size of the longest increasing subsequence : "<<count2+1<<endl;
    cout<<endl;
    cout<<"The sequence is : ";
    for(j=0;j<n;j++)
    {
        if(arra[temp][j]>0)
        cout<<arra[temp][j]<<" ";
    }
    cout<<endl;
    cout<<endl;

    for(i=0;i<n;i++)
    {
        arra2[i][0]=s[i];
        lower2=arra2[i][0];
        for(j=1+i;j<n;j++)
        {
            if(s[j]<=lower2)
            {
                arra2[i][j]=s[j];
                lower2=arra2[i][j];
                count3++;
            }
        }
        if(count3>count4)
       {
           count4=count3;
           temp2=i;
       }
       count3=0;

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout<<arra2[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    cout<<"The Size of the longest decreasing subsequence : "<<count4+1<<endl;
    cout<<endl;
    cout<<"The sequence is : ";
    for(j=0;j<n;j++)
    {
        if(arra2[temp2][j]>0)
        cout<<arra2[temp2][j]<<" ";
    }
    cout<<endl;



}
