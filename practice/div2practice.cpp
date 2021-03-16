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
ll mexx(vector<ll> a)
{
    ll n = a.size();
    for(ll i= 0 ; i < n ; i++)
    {
        if(a[i] > i)
            return i;
    }
    return a[n-1] + 1;
}



void solve()
    {
        ll n  , k ;
        vector<ll> a; 
        cin >> n >> k ;
        ll x;
        unordered_set<ll> s;
        for(ll i = 0 ; i < n; i++)
            {
                cin >> x;
                a.push_back(x);
                s.insert(x);
            }
        if(k == 0)
            {
                cout << a.size();
                return ;
            }
        sort(a.begin() , a.end());
        ll minn = mexx(a); 
        ll maxx = a[n-1];
        ll p = ceil((minn + maxx)/2.0);
        if(p > maxx)
            {
                cout << n + k ;
                return ;
            }
        else if(s.find(p) != s.end())
            {
                cout << n;
                return ;
            }
        else
            cout << n + 1;
        }
    

int main() {
    ll t;
    cin >> t;
    for(ll i =1 ; i <=t; i++)
         {
            solve();
            cout << endl;
        }
    return 0 ;
}