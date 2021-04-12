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
  string s;
  cin >> s;
  ll n = s.length();
  ll l = 0;
  ll f = 0;
string s1 = "";
string s2 = "";
ll i = 0  , j = n-1;

bool f_first = true;
bool l_last = true;
while(i < j)
    {

    if(f_first == true || l_last == true)
    {    
        if(f_first == true)
        {
             if(s[i]=='0')
                {
                    f++;
                }
            else
               {              
                s1 = s1 + s[i];    
                f_first = false;
               }
            i++;
        }
        if(l_last == true)
        {
            if(s[j] == '0')
              { 
                   l++;
              }
            else
            {
                s2 = s2 + s[j];
                l_last = false;
            }   
            j--;
        }
        continue;
    }

    else
    {
        s1 = s1 + s[i];
        s2 = s2 + s[j];
        i++;j--;   
    } 
}

if(s2 == s1 && l>=f)
    {
        cout << "Yes";
    }
else
    {
        cout << "No";
    }

}


int main() {
          solve();
}