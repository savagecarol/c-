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

bool isPalindrome(string str)
{
    int l = 0;
    int h = str.length()-1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    string s;
    cin >> s;
    if(!isPalindrome("a"+s))
        {
            yes();
            cout<< endl <<"a" +s;
            return;
        }
    if(!isPalindrome(s+"a"))
        {
            yes();
            cout<< endl << s + "a";
            return;
        }
    no();
}
int main()
 {
     ll t;
     cin >> t;
     while(t--)
     {
            solve();
            cout << endl;
    }
            return 0 ;
}