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
    ll arr[n];
    for(ll i=0;i<n;i++)
        {
            cin >> arr[i];
        }

    sort(arr , arr + n);

    ll a = arr[0];
    ll b = arr[n-2];
    ll c = arr[n-1];

    ll x = arr[0];
    ll y = arr[1];
    ll z = arr[n-1];
    
    ll sum1 = abs(a-b) + abs(b-c) + abs(c-a);
    ll sum2 = abs(x-y) + abs(y-z) + abs(z-x);

    cout << max(sum1 , sum2);

}


int main() 
{
	
	int t;
	cin>> t;
	while(t--)
	{
	    
	   solve();
       cout<<endl;
	}

	return 0;
}