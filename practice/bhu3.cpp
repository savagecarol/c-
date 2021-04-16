/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;

/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define two() cout << "0"
#define ll long long int
#define mp make_pair
#define fi first
#define se second
#define pb push_back

/* loops */
#define inp(i,n,arr) for(int i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(int i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(int i=0;i<n;i++)

/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/* code */
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    inp(i , n , a);
    ll q;
    cin >> q;
    vector<pair<ll , ll>> qu;
    ll x , y;
    for(ll i = 0 ; i < q; i++)
    {
        cin >> x >> y;
        qu.push_back({x , y});
    }
        ll d[n];
        for(ll i = 0 ; i < n;i++)
        {
            d[i] = i;
        }


        for(ll j = 0 ; j < q ;j++)
        {
                ll c = qu[j].fi;
                ll b = qu[j].se;
                c=c-1;
                ll distance = d[c] - c;
                ll i = d[c];
                ll fill = 0;
                ll res = 0;
                while(d[i]!=i) i=d[i];
                ll set=0;
            while(i<n)
                { 
                    set=i;
                    if(a[i] <=b)
                        {
                            fill = fill +a[i];
                            b=b-a[i];
                            a[i] = 0;    
                        }
                    else
                    {
                        fill = fill + b;
                        a[i] = a[i] - b;
                        b=0;
                    }
                    res = res + (fill * distance);
                    distance++;
                    fill = 0;
                    i++;
                }
                cout << res << endl;
                for(ll k = c ; k <=set; k++)
                {
                    if(a[k] == 0)
                        {
                            d[k] = set;
                        }                
                }

        }
}
int main()
{
    int t = 1;
    while(t--)
        {
        solve();

        }
    return 0 ;
}