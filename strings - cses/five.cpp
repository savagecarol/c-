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

/* power function */
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
int gcd (int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
int countSetBits(int n){
    unsigned int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
        }
    return count;
}

 int powerOfTwo(int n)
    {
        return n && (!(n & (n-1)));
    }
/*code*/

int main() 
{
  ll t;
  cin >> t;
  while(t--)
  {
      int n , m;
      cin >> n >> m;
      char a[n][m];
      for(int i = 0 ; i < n;i++)
      {
          for(int j = 0 ; j < m ;j++)
                  {
                        cin >> a[i][j];
                  }
      }

    char b[n][m];
    char c[n][m];
    bool k = true;
    for(int i = 0 ; i < n;i++)
      {
    
          for(int j = 0 ; j < m ;j++)
          {
              if(i%2 ==0 && j%2 == 0 ) {c[i][j] = 'W';b[i][j] = 'R'; }
              else if(i%2 == 0 && j%2!=0 ){c[i][j] = 'R'; b[i][j] = 'W'; }
                 else if(i%2 != 0 && j%2==0 ){c[i][j] = 'R'; b[i][j] = 'W'; }  
                       else if(i%2 != 0 && j%2!=0 ){c[i][j] = 'W'; b[i][j] = 'R'; }  
          }
      }
     k = true;
    for(int i = 0 ; i < n ;i++)
    {
        for(int j = 0 ; j < m ;j++)
        {
            if(a[i][j] == '.') continue;
            else if(a[i][j] == b[i][j]) continue;
            else {
                k = false; break; 
            }
        }
    }

    if(k==true)
    {
        cout << "YES" << endl;
        for(int i = 0 ; i < n ;i++)
        {
        for(int j = 0 ; j < m ;j++)
        {
            cout << b[i][j];
        }
        cout << endl;
        }
        continue;
    }

    k = true;
    for(int i = 0 ; i < n ;i++)
    {
        for(int j = 0 ; j < m ;j++)
        {
            if(a[i][j] == '.') continue;
            else if(a[i][j] == c[i][j]) continue;
            else {
                k = false; break; 
            }
        }
    }
    if(k==true)
    {
         cout << "YES" << endl;
        for(int i = 0 ; i < n ;i++)
        {
        for(int j = 0 ; j < m ;j++)
        {
            cout << c[i][j];
        }
        cout << endl;
        }
        continue;
    }
    cout << "NO" << endl;
  }
}
