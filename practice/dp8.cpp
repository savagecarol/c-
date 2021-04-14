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
ll mod=1000000007;
ll inf=1e9;
int mXN=1e5+1;
ll dp[100005];
void solve()
 
{
int n,d ,ans=1,ok=0;
cin >> n >> d;
string s;
cin >> s ;
for(int i=d ; i<n-1 ; i=i+d){
  ans++;
   for(int j=i ; j>i-d ; j--){
     if(s[j]=='1'){
       i=j;
       ok=1;
    
       break;
     }
   }
   if(ok==0){
    cout << "-1\n" ;
    return ;}
    ok=0;
 
}
cout << ans << endl;
}
 
int main()
{
  int t=1;
  while(t--)
    solve();
    return 0 ;
}
  