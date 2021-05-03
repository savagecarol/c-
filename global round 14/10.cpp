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
    ll n , w;
    cin >> n >> w;
    ll a[n];
    inp(i , n , a);
    ll sum = 0;
    for(int i = 0 ; i < n;i++)
    {
        sum = sum + a[i];
    }
    if(sum == w)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES" << endl;
        sum = 0;
    for(int i = 0 ; i < n-1 ; i++)
        {
            sum = sum + a[i];
            if(sum == w)
            {   int temp = a[n-1];
                a[n-1] = a[i];
                a[i] = temp;
                cout << a[i] << " ";
                sum = sum + a[i];
                sum = sum - a[n-1];
            }
            else
            {
                cout << a[i] << " ";
            }
        }
        cout << a[n-1];
    }
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