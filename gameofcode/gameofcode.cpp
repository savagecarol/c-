#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll var=pow(10,13);
ll findIndex(ll n)
{

    if (n <= 1)
        return n;

    ll a = 0, b = 1, c = 1;
    int ll = 1;
    while (c < n)
    {
        c = a + b;
        res++;
        a = b;
        b = c;
    }
    return res;
}

int main()
{
    ll n;
    ll result = findIndex(n%var);
    cout<<result<<endl;
}
