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



        for(ll j = 0 ; j < q ;j++)
        {
            ll c = qu[j].fi;
            ll b = qu[j].se;
            ll count = 0;
            bool first = true;
            ll distance = -1;
            for(ll i = c-1  ; i < n ; i++)
                { 
                    if(b==0)
                        break;

                    if(a[i]<= b  && first == true)
                    {
                             b = b-a[i];
                             a[i] = 0;
                            first = false;     
                    }

                    if(a[i]> b && first )
                    {
                        a[i] = a[i] - b;
                            b = 0;
                        first = false;     
                    }

                      if(a[i]<=b  && !first)
                    {
                          count = count + a[i];
                            b = b-a[i];
                            a[i] = 0;
                    }

                    else
                        {
                                 count = count + b;
                                a[i] = a[i] - b;
                                 b = 0;
                        }
                        distance++;
                }


                cout << count * distance << endl;
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