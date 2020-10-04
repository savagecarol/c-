#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    ll j;
    for( j=0;j<t;j++)
    {
        ll n;
        cin>>n;
        ll k;
        cin>>k;
        queue<ll> q;
        queue<ll> p;
        ll x;
        for(ll i=0;i<n;i++)
        {
             cin>>x;
            q.push(x);
            p.push(i+1);

        }

        cout<<"Case #"<<j+1<<":"<<" ";

          while(!q.empty())
        {
                  ll s=q.front();
                  ll z=p.front();
                    q.pop();
                    p.pop();
                    ll a=s;
                    a=a-k;
                    if(a<=0)
                        cout<<z<<" ";
                    else
                        {
                        q.push(a);
                        p.push(z);

                        }

        }

        cout<<endl;

    }
    return 0;
}
