#include<bits/stdc++.h>
using namespace std;

void gcd(int a, int b, int *s, int *t)
{

    if (a == 0)
    {
        *s = 0;
        *t = 1;
        return ;
    }

    int p, q;
    gcd(b%a, a, &p, &q);

    *s = q - (b/a) * p;
    *t = p;

    return;
}

int main()
{
    int s,t, a,b;
    cout<<"enter a and b"<<endl;
    cin>>a>>b;
    if(a>0 && b>0)
    {
        gcd(a,b,&s,&t);
        cout<<s<<" "<<t;
    }
    else
        cout<<"invalid input"<<endl;

}
