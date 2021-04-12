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
void solve()
{
    int n , k ;
    cin >> n >> k;
    if(k == 1)
        {
            for(int i = 0 ; i < n ;i++)
            {
                cout <<"a";
            }
            return;
        }
        
    bool l = true;


    if(n%2==0)
    {    
    for(int i = 0 ; i < n;)
        {
        if(l)
        { cout << "aa"; l = false;}
        else
         {cout << "bb";l=true;}
         i=i+2;
        }
    } 
    else
    {
        for(int i = 0 ; i < n-1;)
        {
        if(l)
        { cout << "aa"; l = false;}
        else
         {cout << "bb";l=true;}
         i=i+2;
        }
            if(l==false)
                cout << "b";
            else
                cout << "a";
    }
    cout << endl;
}
int main() {
        solve();
        return 0 ;
}