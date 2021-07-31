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
    string n;
    cin >> n;
    int a[4];
    for(int i = n.length()-1 ; i >=0 ; i--)
    {
           a[i] =  n[i]-'0';
    }
    if(a[0]==a[1] && a[1]==a[2] && a[2] == a[3] && a[3]==a[1]){ cout << "Weak" ; return 0;}
    for(int i = 0 ; i <=2 ; i++)
    {
        if(a[i] == 9 && a[i+1] == 0) continue;
        if(a[i+1]-a[i]==1)continue;
        else {cout <<"Strong"; return 0;}
    }

    cout << "Weak";
}
