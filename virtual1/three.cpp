#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll m;
        cin>>m;
        ll k=abs(n-m);
        if(k==0)
        {
            cout<<0<<endl;
            continue;
        }
        if(k>10)
        {
            if(k%10==0)
                {cout<<(k/10)<<endl;
                continue;
                }
            else
            {
                cout<<(k/10)+1<<endl;
                continue;

            }
        }
        else
        {
            cout<<1<<endl;
        }



    }

}
