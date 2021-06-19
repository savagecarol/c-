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
        ll a[n];
        inp(i ,  n , a);
        sort(a , a +n);
        unordered_map<ll , ll> m; 
        ll start , end ;  
        ll diff = INT_MAX;
        for(int i = 0 ; i < n-1 ;i++)
        {
            if(abs(a[i+1] - a[i]) < diff)
            {
                start = a[i] ;
                end = a[i+1];
                diff = abs(a[i+1] - a[i]);
            }
            m[a[i]]++;
        }
        vector<ll> r;
        r.push_back(start);
        m[start]--; 
        for(ll i = n-1 ; i >0 ;i--)
        {

            if(a[i]>end) r.push_back(a[i]);
            else if(a[i] == end && m[end]>1) {r.push_back(a[i]); m[end]--;}
            else break;
        }
        for(ll i = 0 ; i <n-1 ;i++)
        {
            if(a[i]<start) r.push_back(a[i]);
            else if(a[i] == start && m[start]>0) {r.push_back(a[i]); m[start]--;}
            else break;
        }
        r.push_back(end);
        out(i , n , r);
        cout << endl;
 }
}

