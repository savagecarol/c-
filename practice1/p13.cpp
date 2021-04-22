#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
 
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
 
const int MOD = 1000000007;
const ll INF = 1e18;
const int MX = 100001; 
int a[201201],vis[201201],ans[201201];
int uttar;
vi v[201201];
 
int dfs(int cur , int ans){
 vis[cur]=1;
 for(int a : v[cur]){
   dfs(a ,ans+1);
 }
  uttar = max(uttar, ans);
}
void solve(){
  int n,x;
  cin >> n;
  for(int i=1 ; i<=n ; i++){
    cin >> x ;
    if(x!=-1)
    v[x].pb(i);
  }
  for(int i=1 ; i<=n ; i++){
     dfs(i,1);
  }
  cout << uttar;
}
   
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
 
    int t=1;
    while(t--)
        solve();
    return 0;
}
 