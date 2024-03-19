#include<bits/stdc++.h>
using namespace std;
int main()
{
long long x;
int i=0;
cout<<"enter x: ";
cin>>x;
cout<<"iteration\t"<<"x"<<endl;
while(true)
{
if(x%2==0)
  x=x/2;
else
  x=(3*x)+1;
i++;
//cout<<i<<"\t"<<x<<endl;
if(x==1)
break;
}
cout<<i<<"\t\t"<<x<<endl;
}  
  
    