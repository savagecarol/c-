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

void print(int i, int n)
{
	string buf(1, char('0'+i));
	for(int k=i-1; k>=0; --k)
		buf = char('0'+k) + (' ' + buf + ' ') + char('0'+k);
	buf = string(n*2-i*2, ' ') + buf;
	cout << buf << endl;
}
 
int main()
{
	for(int n; cin>>n;)
	{
		for(int i=0; i<=n; ++i)
			print(i, n);

		for(int i=n-1; i>=0; --i)
			print(i, n);

	}
}