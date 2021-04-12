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
    string s;
    cin >> s;
    int n = s.length();
    int count = 0;
    for(int i = 0 ; i < n ;i++)
    {
        for(int j = i+1 ; j < n ;j++)
        {
            for(int k = j+1 ; k < n ;k++)
            {
                if(s[i] == 'Q' && s[j]== 'A' && s[k] == 'Q')
                    count++;
            }
        }
    }
    cout << count;
}

        int main() {
        solve();
        return 0 ;
            }