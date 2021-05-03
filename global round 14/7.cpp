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
    ll n , k ;
    cin >> n >> k;
    ll t_green = (n*2);
    ll t_red = (n*5);
    ll t_blue = (n*8);
    if(t_green%k==0)
    {
        t_green = t_green / k;
    }
    else
    {
              t_green = (t_green / k) + 1; 
    }
    

        if(t_blue%k==0)
    {
        t_blue = t_blue / k;
    }
    else
    {
              t_blue = (t_blue / k) + 1; 
    }

        if(t_red%k==0)
    {
        t_red = t_red / k;
    }
    else
    {
        t_red = (t_red / k) + 1; 
    }
    cout << t_green + t_blue + t_red ;
}

int main() 
{	
	int t;
	t=1;
	while(t--)
	{
	   solve();
	}

	return 0;
}