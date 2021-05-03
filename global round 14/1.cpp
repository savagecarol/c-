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

	ll b , k;
	cin >> b >> k;
	ll a[k];
	inp(i , k , a);
	ll sum = 0;
	ll p =b;
	for(int i = k-1 ; i >=0 ; i--)
	{
		if(i==k-1)
			sum = sum + a[i];
		else if(i==k-2)
			sum = sum + a[i]*p;
		else
		{
			p=p*b;
			sum = sum + a[i]*p;
		}
	}

	if(sum%2==0)
		cout << "even";
	else
		cout << "odd";
}

int main() 
{
	
	int t;
	t = 1;
	while(t--)
	{
	   solve();
	}

	return 0;
}