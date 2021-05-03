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
    ll n , l , r ;
    cin >> n >> l >> r;
    unordered_map<ll , ll> col;
    ll left[n];
    ll right[n];
    loop(i , l)
    {
        cin >> left[i];
        col[left[i]]++;
    }
    for(int i = l ;i<n;i++)
    {
        cin >> right[i];
        col[right[i]]++;
    }
    ll count = 0;
    for(auto p : col)
    {
        if(p.second%2!=0)
            count++;
    }

        count = count / 2 + 1 ;
    
    cout << count + abs(l - r)/2;
}

int main() 
{	
	int t;
	cin >> t;
	while(t--)
	{
	   solve();
       cout << endl;
	}
	return 0;
}









