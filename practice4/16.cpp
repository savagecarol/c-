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
long long get(long long x)
{
 return x*(x-1)/2;
 
}

void solve() 
{

        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0 ; i < n;i++)
        {
            cin>>a[i];
        }
        for(int i = 0 ; i < n ;i++)
        {
            cin>>b[i];
        }

        if(is_sorted(a.begin(), a.end()))
        {
            cout<<"Yes\n";
            return;   
        }
        int one=0,zero=0;
        for(int i = 0 ; i < n;i++)
        {
            if(b[i])
                one++;
            else 
                zero++;
        }

        if(one==n or zero==n)
        cout<<"No\n";
        else 
        cout<<"Yes\n";
   
}
int main() 
{	
	ll t;
    cin >> t;
	while(t--)
	{
	   solve();
	}
	return 0;
}
