/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;
 
/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define zero() cout << "0"
#define ll long long int
#define mp make_pair
#define fi first
#define se second
#define pb push_back
 
/* loops */
#define inp(i,n,arr) for(ll i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(ll i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(ll i=0;i<n;i++)
#define arrs(i,n,arr,sum) for(ll i = 0 ; i < n ; i++) sum = sum + arr[i];
#define arrmax(i , n , arr , maxx) for(ll i = 1 ; i < n;i++) maxx = max(maxx , arr[i]);
#define arrmin(i , n , arr , minn) for(ll i = 0 ; i < n;i++) minn = min(minn , arr[i]); 
 
 
/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/* power function */
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int countSetBits(int n){
    unsigned int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
        }
    return count;
}

/*code*/
void solve() 
{
    ll n;
    cin >> n;
    vector<int> a(n);
    inp(i , n , a);
    if(n==1)
    {
        cout << "yes" << endl << 1 << " " << 1;
        return ;
    }

    int l = 0;
	while (l + 1 < n && a[l] < a[l + 1])
    {
	    	++l;
	}

	int r = l + 1;
	while (r < n && a[r] < a[r - 1]) 
    {
		++r;
	}
	reverse(a.begin() + l, a.begin() + r);
	for (int i = 1; i < n; ++i) {
		if (a[i] < a[i - 1]) {
			puts("no");
			return ;
		}
	}
	puts("yes");
	printf("%d %d\n", l + 1, r);
}
int main() 
{	

	ll t;
    t=1;
	while(t--)
	{
	   solve();
       cout << endl;
	}
	return 0;
}
