
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

ll mod = 1e9 + 7;
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
int powerOfTwo(int n){
        return n && (!(n & (n-1)));
    }
/*code*/
void solve() 
{
    int n;
    cin >> n;
    int dp[n+1][n+1];
    char a[n][n];
    for(int i = 0 ; i <=n;i++)
    {
        for(int j = 0 ; j<=n ;j++)
        {   
            if(i==0) dp[0][j] = 0;
            if(j==0) dp[i][0] = 0;            
            if(i<n && j<n) cin >> a[i][j];
        }  
    }
    if(a[0][0] == '*')
        { cout << 0; return;}
    else dp[0][1] = 1;    
    for(int i = 1  ; i <=n ;i++)
    {
        for(int j = 1; j <=n ;j++)
        {
            if( a[i-1][j-1] == '*' ) dp[i][j] = 0;
            else dp[i][j] = (dp[i][j-1] + dp[i-1][j])%mod;
        }
    }
    cout << dp[n][n]; 
}
int main() 
{
    solve();
	return 0;
}
