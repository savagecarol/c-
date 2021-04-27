/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;

/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define two() cout << "0"
#define ll long long int
#define intt long long
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
void solve()
{
    vector<string> vec;
    for(int i = 0 ; i < 9 ;i++)
    {
        string x;
        cin >> x;
        vec.push_back(x);
    }
    vec[0][0] = vec[0][1];
    vec[4][1] = vec[4][0];
    vec[7][2] = vec[7][1];
           vec[1][3]=vec[0][3];
        vec[6][4]=vec[5][4];
        vec[3][5]=vec[2][5];
        vec[2][6]=vec[1][6];
        vec[5][7]=vec[4][7];
        vec[8][8]=vec[7][8];
 
        for(int i=0;i<9;i++)
        cout<<vec[i]<<endl;

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