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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        s = s + s;
        ll p = INT_MAX;
        ll i , j;
        for(i = 0 ; i <2*n;)
        {
            if(s[i] == '1')
            { 
             j = i+1;
             for( j = i+1 ; j < 2*n ; j++)
                if(s[j] == '1') break;
            cout << j-i << endl;
             p = min(p , j-i);
             i=j;
            }
            else i++;
        }
        if(p==n)
            cout << 0;
        else
        {
        ll count = 0;   
        for(int i = 0 ; i <2*n ;i++)
            {
                if(s[i] == '1' && s[i+p]!='1')
                {
                    count++;
                    s[i+p] = '1';
                }
            }
            cout << count;
        }
        cout << endl;
    }
}
