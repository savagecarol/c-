#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fo(i , n)  for(int i = 0 ; i < n ; i++)
#define mp make_pair
#define fi first
#define se second
#define pb push_back
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

pll lastpoint(ll n,ll k,ll x,ll y)
{
    if(x==y)
        return mp(n,n);
    else if(x>y)
        {
            pll arr[4]={mp(n, n+y-x) , mp(n+y-x, n) , mp(0,x-y) , mp(x-y , 0)};
          return arr[(k-1)%4];
        }
    else 
         {
              pll arr[4]={mp(x+n-y, n) , mp(n,x+n-y) , mp(y-x,0) , mp(0,y-x)};
         return arr[(k-1)%4];
         }

}

void solve()
{   
    ll n;
    ll k;
    ll x;
    ll y;

    cin >> n;
    cin >> k;
    cin >> x;
    cin >> y;

    pll a = lastpoint(n, k , x, y);
    cout << a.fi << " " << a.se ; 
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