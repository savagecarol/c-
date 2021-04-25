/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;
 
/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define zero() cout << "0"
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
 
 
/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
/* code */ 

int main(){

ll n;
cin >> n;
ll a[n];
inp(i , n , a);
sort(a , a+n);
if(a[0] == a[n-1])
 {
        cout << 0 << " " << n*(n-1)/2LL;
        return 0;
 }
ll diff = a[n-1] - a[0];
cout << diff << " ";
ll l = 0 , h = 0 ;
    loop(i , n)
    {
        if(a[i] == a[0])
            l++;
        else if(a[i] == a[n-1])
            h++;
    }
    cout << l*h;
    return 0;
}