#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll t;
bool covid(ll n,ll k,ll x,ll y)
{
  if(x==y)
        return true;
    ll p=(x+k)%n;
    if(p==t)
        return false;
  return covid(n,k,p,y);

}


void solve()
{
    ll n,k,x,y;
    cin>>n;
    cin>>k;
    cin>>x;
    cin>>y;
    t=x;
    if(covid(n,k,x,y))
        cout<<"YES";
    else
        cout<<"NO";


}


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;

    }
    return 0;
}

