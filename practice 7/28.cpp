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
bool comp(pair<int , int> a , pair <int , int> b)
{
    return a.second >= b.second;
}
int main() 
{
   ll n , x;
   cin >> n;
   vector<pair<int , int>> a(10 , {0 , 0});
   for( int i = 0 ; i < n ; i++ )
       {
            cin >> x;
            if(x==0)
                {
                    a[0].first = 0;
                    a[0].second+=1;
                }
            else
            {
            while(x!=0)
                {
                int p = x%10;
                a[p].first = p;
                a[p].second+=1;
                x=x/10;
                }
            }
       }
    sort(a.begin() , a.end() , comp);
    // for 1op 5 number
    cout <<  "for top 5" << endl;
    for(int i = 0 ; i <=4;i++)
    {
        cout << a[i].first << " ";
    }
    // for same frequency
    cout << endl << "for same frequency" << endl;
    int p = a[5].second;
    for(int i = 5 ;i<=9 ; i++)
    {
        if(p == a[i].second)
            cout << a[i].first << " ";
    }
}
