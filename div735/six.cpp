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
   cin >> t ;
   while(t--)
   {
       ll n;
       cin >> n;
       string x , y;
       cin >> x;
       cin >> y;
    
        int i = 0 , j=n;

    
           while(i < j)
           {
                    if(x[i] =='1')
                    {
                        if(i-1>=0 && y[i-1] == '1' ) { x[i] ='2'; y[i-1]='0';}
                        else if(i+1<n && y[i+1] == '1') { x[i] = '2'; y[i+1] ='0';}
                    }
                    if(x[i]=='0')
                    {
                        if(y[i] == '1') { x[i]='2'; y[i]='0'; }
                    }
                    i++;
            }
               

    int ans = 0;
    for(int i = 0; i < n ; i++) if(x[i] == '2' ) ans++;
    cout << ans << endl;
    
    }

}
