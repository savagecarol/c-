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
    string s ; int k;
    cin >> s;
    cin >> k;

    int i = 0;
    int n = s.length();
    int count = 1;
    while(i < n)
    {
       string l = s.substr(i , k); 
        bool r = true;
        for(int j = 0 ; j < k-1 ;j++)
        {
            if(l[j]!=l[j+1])
                {
                    r =false;
                }
        }
        if(r==true)
        {
            string p = s.substr(0 , i);
            string q = s.substr(i+k , n);
            s = p + q;
            i = 0;
            n = s.length();
        }
        else
        {
            if(i+k<n)
                 i++;
            else    
                break;
        }
    }
    
        cout << s;
}
int main() {
        solve();
        return 0 ;
}