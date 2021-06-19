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

/*code*/
int main() 
{
	ll t;
    cin >> t;
	while(t--)
	{
        ll n , m , x, y ;
        cin >> n >> m >> x >> y ;

        if(n==1 && m == 1 && x ==1 && y==1 )
            cout << 1 << " " << 1 << " " << 1 << " " << 1;

    if(x==1 && y==1)
    {
        if(n>=2)
            cout << 2 << " " << 1 << " ";
        else if(m>=2)
            cout << 1 << " " << 2 << " ";
    }
    else 
        cout << 1 << " " << 1 << " ";


    if(x==n && y==m)
    {    
        if(n>=2)
            cout << n-1 << " " << m;
        else if(m>=2)
            cout << n << " " << m-1;
    }
    else
        cout << n << " " << m ;        
	cout << endl;	
	}
	return 0;
}
