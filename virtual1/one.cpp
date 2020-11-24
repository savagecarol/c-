#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<0<<endl;
        continue;
    }
        if(n==2)
    {
        cout<<1<<endl;
        continue;
    }

        if(n==3)
    {
        cout<<2<<endl;
        continue;
    }

    if(n%2 == 0)
          cout<<2;
    else
        cout<<3;
    cout<<endl;
}

}
