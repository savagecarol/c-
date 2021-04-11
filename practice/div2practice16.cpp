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

void solve()
{ 
    int x, y;
    int p;
    int a = -1 , b = 0;
    for(int i = 0 ; i < 25 ; i++)
        {
        cin >> p;
        if(i%5==0)
            {
                a++;
            }
        if(i%5==0)
            {
                b=0;
            }
        if(p == 1)
            {
                x=a;
                y=b;
            }
          b++;  
        }
    cout << abs(2-x) + abs(2-y);
}

int main() {
            solve();
            return 0 ;
}