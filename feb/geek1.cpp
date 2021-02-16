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

	cin >> arr[0];
	ll count = 0;
	for(ll i=1; i<n;i++)
	{
			cin >> arr[i];
			if(arr[i-1] == arr[i])
				count++;
	}

	
	ll k = arr[0];
	for(int i=1;i<n;i++)
	{
		k = min(arr[i] , k);
	}

	ll p = 0;
	for(ll i=0;i<n;i++)
	{
		if(k == arr[i])
			p++;

	}

		cout << n-p;
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