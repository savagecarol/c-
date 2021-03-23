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


void check(  vector<vector<int>> &a , int n , int m , int i ,int j)
{
    int p = -1 , q = -1 , r = -1 , s = -1;
   if(   i-1 >=0  && abs(a[i-1][j] - a[i][j]) != 1)
   {
       p = abs(a[i-1][j] - a[i][j]) ;
   } 

   if(   i+1<n && abs(a[i+1][j] - a[i][j]) != 1)
   {
       q =  abs(a[i+1][j] - a[i][j]);
   } 

if(  j-1 >=0  && abs(a[i][j-1] - a[i][j]) != 1)
   {
       r = abs(a[i][j-1] - a[i][j]);
   } 

if(  j+1 <m  && abs(a[i][j+1] - a[i][j]) != 1) 
   {
      s =  abs(a[i][j+1] - a[i][j]);
   }

   int count = 0;
   if(p!=-1)
   {
          if(a[i-1][j] >= a[i][j])
            a[i-1][j] = a[i][j] + 1;
        else
            a[i-1][j] = a[i][j] - 1;

   }
   if(q!=-1)
   {
          if(a[i+1][j] >= a[i][j])
            a[i+1][j] = a[i][j] + 1;
        else
            a[i+1][j] = a[i][j] - 1;

   }
   if(r!=-1)
   {
          if(a[i][j-1] >= a[i][j])
            a[i][j-1] = a[i][j] + 1;
        else
            a[i][j-1] = a[i][j] - 1;

   }
   if(s!=-1)
   {
       if(a[i][j+1] >= a[i][j])
            a[i][j+1] = a[i][j] + 1;
        else
            a[i][j+1] = a[i][j] - 1;


   }

}

void solve(ll i)
{
    int n;
    int m; 
   cin >> n >> m;
   vector<vector<int>> a;
   int b[n][m];

    int x;
    for(int i = 0 ; i < n; i++)
    {
        vector<int> c;
        for(int j = 0 ; j < m ; j++)
        {
            cin >> x;
            c.push_back(x);
            b[i][j] = x;
        }
        a.push_back(c);
    }
for(int i = 0 ; i < n; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
             check( a , n , m  , i , j);
        }
    }
    int count = 0;
for(int i = 0 ; i < n; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            cout << a[i][j] << " ";
            count += abs(a[i][j] - b[i][j]);
        }
        cout << endl;
    }

cout << "Case #"<<i << ": " << count;
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