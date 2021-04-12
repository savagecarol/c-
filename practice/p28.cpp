/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;

/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define two() cout << "0"
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

/* code */
bool isPrime(int n)
{

    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 


void solve()
{
    int n , q;
    cin >> n;
    cin >> q;
    int a[n];
    int b[q];
    for(int i = 0 ; i < n ;i++)
    {   
        cin >> a[i];
    }

    for(int i = 0 ; i < q ;i++)
    {   
        cin >> b[i];
    }


    int c[51] ;
    memset(c , -1 , sizeof(c));

    for(int i = 0 ; i < n;i++)
    {
        if(c[a[i]] == -1)
            c[a[i]] = i+1;
    }
    

    for(int i = 0 ; i < q ;i++)
    {
        cout << c[b[i]]<<  " ";


        for(int j = 0 ; j < 51 ;j++)
        {
          if(c[j]!=-1  && c[j] < c[b[i]])
          {
              c[j] = c[j] + 1;
          }  
        }
        c[b[i]]=1;
    }
}
int main() {

        solve();
        return 0 ;
}