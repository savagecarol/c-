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
    int n;
    cin>>n;
    int A[n];
    for(auto &i: A) cin>>i;
    sort(A, A+n);
    int mid = ceil((1.0*n)/2) - 1;
    cout<<A[mid];
}

int main() 
{	
	int t;
	t=1;
	while(t--)
	{
	   solve();
	}

	return 0;
}