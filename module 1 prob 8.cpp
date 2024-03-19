#include<bits/stdc++.h>
using namespace std;
int main()
{
int z;
cout<<"enter z"<<endl;
cin>>z;
for(int x=1;x<=z;x++)
{
for (int y=1;y<=z;y++)
{
  if(((x*x*x)+(y*y*y))==(z*z*z))
  {
    cout<<"x= "<<x<<endl;
    cout<<"y= "<<y<<endl;
  }
  else 
  {
    cout<<"could not find such number"<<endl;
    break;
  }
 }
}
}  