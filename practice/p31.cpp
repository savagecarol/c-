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
        unordered_set<char> a;
        for(int i = 0 ; i < s.size();i++)
        {
            a.insert(s[i]);
        }
        if(a.size()%2 == 0)
            {
                cout << "CHAT WITH HER!";    
            }
        else
        {
            cout << "IGNORE HIM!"; 
        }

    }
int main()
{
    ll t;
    t = 1;
    while(t--)
     {
        solve();
        cout << endl;
     }
    return 0;
}