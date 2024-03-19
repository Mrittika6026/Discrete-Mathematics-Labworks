#include <iostream>
using namespace std;

int main()
{
    int n1, n2,x;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    x= __gcd(n1,n2);

    cout << "GCD = " << x;
    cout<<"LCM = "<<(n1*n2)/x;
    return 0;
}

