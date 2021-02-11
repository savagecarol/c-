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


int train(int n)
{
    int ans = 0;

    if(n<0) return 0;
    if(n==0) return 1;
    if(n==1) return 2;
    ans = train(n-1) + train(n-2) + train(n-3);
    return ans;
}
void solve()
{   int n;
    cin >> n ;
    cout << train(n);
}

int main() 
{
	
	int t;
	cin>> t;
	while(t--)
	{
	    
	   solve();
       cout<<endl;
  
	}

	return 0;
}
