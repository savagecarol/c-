/* code by savagecarol*/
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

unordered_map<char , int> arr;


void solve()
{
arr['a'] = 1;
arr['b'] = 2;
arr['c'] = 3;
arr['d'] = 4;
arr['e'] = 5;
arr['f'] = 6;
arr['g'] = 7;
arr['h'] = 8;
arr['i'] = 9;
arr['j'] = 10;
arr['k'] = 11;
arr['l'] = 12;
arr['m'] = 13;
arr['n'] = 14;
arr['o'] = 15;
arr['p'] = 16;
arr['q'] = 17;
arr['r'] = 18;
arr['s'] = 19;
arr['t'] = 20;
arr['u'] = 21;
arr['v'] = 22;
arr['w'] = 23;
arr['x'] = 24;
arr['y'] = 25;
arr['z'] = 26;
}


int main()
 {

        solve();
        string s;
        cin >> s;

        int n=s.length();
       unordered_set<int> v;
        v.insert(arr[s[0]]);
    
        for(int i=1;i<n;)
        { 
            if(s[i] == s[i-1] )
            {
                int count = 2;
                while(i<n && s[i-1] == s[i]) 
                {
                    v.insert(count * arr[s[i]]);
                    i++;
                    count++;
                }
            }
            else
            {
                v.insert(s[i]);
                i++;
            }   
        }
        int n;
        cin >> n;
        int x;
        for(int i=0;i<n;i++)
        {
            cin>> x;
            if(v.find(x) !=v.end())
                cout<<"YES";
            else
                cout<<"NO";
        }



        	return 0;
}






