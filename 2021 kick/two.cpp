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
#define inp(i,n,arr) for(int i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(int i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(int i=0;i<n;i++)

/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;





bool check(  vector<vector<int>> &a , int n , int m , int i ,int j)
{
    int p = 0 , q = 0 , r = 0 , s = 0;
   if(   i-1 >=0  && a[i-1][j] == a[i][j])
   {
       p++;
   } 

   if(   i+1<n && a[i+1][j] == a[i][j])
   {
       q++;
   } 

if(  j-1 >=0  && a[i][j-1] == a[i][j])
   {
       r++;
   } 

if(  j+1 <m  &&  a[i][j+1] == a[i][j]) 
   {
       s++;
   }
   return (p+q+r+s) > 1;
}

void solve(ll t)
{
       int n;
    int m; 
   cin >> n >> m;
   vector<vector<int>> a;

    int x;
    for(int i = 0 ; i < n; i++)
    {
        vector<int> c;
        for(int j = 0 ; j < m ; j++)
        {
            cin >> x;
            c.push_back(x);
        }
        a.push_back(c);
    }
    vector<pair<int , int>> c;
    for(int i = 0 ; i < n; i++)
    {

        for(int j = 0 ; j < m ; j++)
        {
            if(a[i][j] == 1)
            {
                if(check(a , n , m , i , j))   
                    c.push_back({i , j});
            }
        }
    }

    for(int i = 0 ; i < c.size(); i++)
    {
        cout << c[i].first << " " << c[i].s
    }


cout << "Case #"<<t << ": ";
}

int main() {
    ll t;
    cin >> t;
    for(ll i =1 ; i <=t; i++)
         {
            solve(i);
            cout << endl;
        }
    return 0 ;
}

