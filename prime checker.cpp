#include<bits/stdc++.h>
using namespace std;

void prime(long long n)
{
    int flag= 0;
     for(long long i = 2; i <= n/2; i++)
  {
      if(n % i == 0)
      {
          cout<<"No"<<endl;
          flag=1;

          break;
      }
  }
  if (flag==0)
      cout << "yes"<<endl;
}

int main()
{
    long long n;
    cin>>n;
    prime(n);
}
