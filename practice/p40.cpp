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
bool sortcol( const vector<int>& v1, 
               const vector<int>& v2 ) { 
 return v2[0] > v1[0]; 
} 
void solve(){
	ll n;
	cin >> n;
	vector<vector<int>> a;
	int x,y;
	for(int i=0; i<n; i++)
    {
		a.push_back(vector<int>());
		cin >> x >> y;
		a[i].push_back(x);
		a[i].push_back(y);
	}
	sort(a.begin(),a.end(),sortcol);
	int check = 0;
	for(int i=0; i<n-1; i++){
		if(a[i][1] > a[i+1][1] && a[i][0] != a[i+1][0]){
			check = 1;
			break;
			}
		}
		if(check){
			cout << "Happy Alex" << '\n';
			}
            else
            {
				cout << "Poor Alex" << '\n';
			}
}

int main(){
	solve();
	return 0;
}