#include<bits/stdc++.h>
using namespace std;
int main()
{
int p[8],q[8],i,j,k,m,o,r[8];
k=0;
cout<<"p\tq\tr\t~(p^q)^r\t~p|~q^r\n"<<endl;
for(i=0;i<8;i++)
{
if(i>3)
p[i]=1;
else
p[i]=0;
if(i%2==0)
r[i]=1;
else
r[i]=0;
}
for(i=0;i<4;i++)
{
if(i%2!=0)
{
q[k]=1;
q[++k]=1;
k++;
}
else
{
q[k]=0;
q[++k]=0;
k++;
}
}
for(i=0;i<8;i++)
{
m=(!(p[i]&q[i]))&r[i];
o=((!p[i])|(!q[i]))&r[i];
cout<<p[i]<<"\t"<<q[i]<<"\t"<<r[i]<<"\t"<<m<<"\t"<<o<<endl;
}
}