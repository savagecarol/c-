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

#define mod 1000000007
 ll dp[2000][2000];


/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/* code */
ll find(ll a[],ll l,ll r){
    if(l==r)
        return 0;
    if(dp[l][r]!=-1)
        return dp[l][r];
    return dp[l][r]=min(find(a,l+1,r),find(a,l,r-1))+a[r]-a[l];
}
void solve()
{
	    ll t,n,k,i,j;
 cin >> n ;
    ll a[n];
    
    for(i=0;i<n;i++){
        cin >> a[i];
        fill(dp[i],dp[i]+n,-1);
    }
    sort(a,a+n);
    cout << find(a,0,n-1);
    
}
 
int main(){
	solve();
	return 0;
}