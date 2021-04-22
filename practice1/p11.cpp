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
ll n ;
unordered_set<int> a;
void solve()
{
	ll n;
	cin >> n;
	for(int i = 1 ; i <=1000 ;i++)
	{
		if(a.find(n*i +1) == a.end())
			{
				cout << i;
				return;
			}
	}
}

int main()
{
    a.insert(2);
	a.insert(3);
    for(ll i = 5 ; i < 1000000 ; i=i+2)
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
                a.insert(i);
            }
    }

    ll t;
    t=1;
    while(t--)
    {
	solve();
    }
	return 0;
}