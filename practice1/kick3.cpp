/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;

/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define two() cout << "0"
#define ll long long int
#define intt long long
#define mp make_pair
#define fi first
#define se second
#define pb push_back

/* loops */
#define inp(i,n,arr) for(int i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(int i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(int i=0;i<n;i++)

#define mod 1000000007
 ll dp[2000][2000];


/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/* code */ 
 set<ll> a;
void solve(ll t)
{
    ll n;
    cin >> n;
    cout << "Case #"<<t<<": ";
    if(a.find(n) == a.end())
    {
        ll r =1;
        for(auto k : a)
        {
            if(k <=n)
            {
               r = k;     
            }
            else
            {
                break;
            }
        }
        cout << r;
    
    }
    else
    {
        cout<< *a.lower_bound(n);
    }

}
int main()
{
 
    ll prev = 3;
    a.insert(2);
    a.insert(6);
    for(ll i = 5 ; i < mod ; i=i+2)
    {

        
        ll flag = 1;
         for (ll j = 2 ; j <= sqrt(i); j++) {
                if (i % j == 0) {
                            flag = 0;
                             break;
                            }
                    }
            if(flag ==1 )
            {
                a.insert(prev * i);
                prev = i;
            }
    }

    ll t;
    cin >> t;
    for(ll i =1 ; i <=t;i++)
    {
	    solve(i);
        cout << endl;
    }
	return 0;
}