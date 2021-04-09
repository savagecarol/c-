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
#define MAX 100
/* loops */
#define inp(i,n,arr) for(int i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(int i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(int i=0;i<n;i++)

/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


char b[MAX][MAX];
void rec(vector<vector<char>> a , int n ,int m , int p , int q)
{
        for(int i=p ; i < n-1;i++)
        {
            for(int j =q ; j < m-1 ;j++)
                {
                    if(a[i][j] != b[i][j])
                        {
                            



                        }
                }
        }
}

void solve()
{
   int n , m  , s;
   cin >> n >> m >>s;

   vector<vector<char>> a;

   for(int i = 0 ; i <n ; i++)
   {
       for(int j = 0 ; j < m ;j++)
       cin >> a[i][j];
   }

   for(int i = 0 ; i <n ; i++)
   {
       for(int j = 0 ; j <m ;j++)
            cin >> b[i][j];
   }

   if(s==0)
    {
        rec(a , n , m , 0 , 0);
    }
}

int main()
 {
            solve();
            cout << endl;
            return 0 ;
}