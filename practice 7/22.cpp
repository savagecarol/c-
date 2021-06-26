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

int segmentTree[400006];

void build(int a[] , int n, int x , int lx , int rx )
{
    if(rx - lx == 1){
        if(lx < n)segmentTree[x] = a[lx];
        return; }
    int mid = (lx+rx) >> 1;
    build(a , n , 2*x+1 , lx , mid) ; // leaf node 1
    build(a , n , 2*x+2 , mid , rx) ; // leaf node 2
    segmentTree[x] = segmentTree[2*x+1] + segmentTree[2*x+2];
}

int sum(int l , int r , int x , int lx , int rx)
{
    if(lx>=r or l>=rx)  return 0;
    if(lx >= l and rx <=r) return segmentTree[x];
    int mid = (lx + rx ) >> 1;
    return sum(l , r , x*2+1 , lx , mid) + sum(l , r, x*2+2 , mid , rx);
}

void update(int i ,int val , int x , int lx , int rx)
{
    if(rx-lx == 1)
    {
        segmentTree[x] = val;
        return ;
    }
    int mid = (lx + rx) >> 1;
    if(i < mid)
        update(i , val , x*2+1 , lx , mid);
    else
        update(i , val , x*2+2 , mid , rx);    
    segmentTree[x] = segmentTree[x*2+1] + segmentTree[x*2+2];
    return;
}

/*code*/
int main() 
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n ;
        if(n%2 == 0)
        {
            for(ll i = 2 ; i<=n ; i=i+2)
                cout << i << " " << i-1 << " ";
        }
        else
            {
                cout << 3 << " " << 1 << " " << 2 << " ";
                for(ll i = 5 ; i<=n ; i=i+2)
                cout << i << " " << i-1 << " ";
            }
        cout << endl;
        
    }
    return 0;
}
