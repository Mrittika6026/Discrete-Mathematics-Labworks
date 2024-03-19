#include<iostream>
using namespace std;
int main()
{
int n,p,q,i,j;
cout << "Give n:"; cin >> n;
int a[n],b[n],A,B,AND[n],OR[n],XOR[n];
cout << "Give A:"; cin >> A;
cout << "Give B:"; cin >> B;
for(i=1;i<=n;i++)
{
a[i] = A%10;
A = A/10;
b[i] = B%10;
B = B/10;
}
//AND calculation
for(i=1;i<=n;i++)
{
if(a[i]==1 && b[i]==1)
{
AND[i]=1;
}
else
{
AND[i]=0;
}
}
//OR calculation
for(i=1;i<=n;i++)
{
if(a[i]==0 && b[i]==0)
{
OR[i]=0;
}
else
{
OR[i]=1;
}
}
//XOR calculation
for(i=1;i<=n;i++)
{
if(a[i]==b[i])
{
XOR[i]=0;
}
else
{
XOR[i]=1;
}
}
//AND printing
cout << "bitwise AND = " ;
for(i=n;i>=1;i--)
{
cout << AND[i];
}
cout << endl;
//OR printing
cout << "bitwise OR = " ;
for(i=n;i>=1;i--)
{
cout << OR[i];
}
cout << endl;
//XOR printing
cout << "bitwise XOR = " ;
for(i=n;i>=1;i--)
{
cout << XOR[i];
}
cout << endl;
}