/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;

/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define two() cout << "0"
#define ll long long int
#define intt long long
#define mp make_pair
#define fi first
#define se second
#define pb push_back

/* loops */
#define inp(i,n,arr) for(int i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(int i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(int i=0;i<n;i++)

#define mod 1000000007
 ll dp[2000][2000];


/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/* code */ 
void solve()
{
       string s;
        int n;
         cin >> n;
        cin >> s;

        char a[n], b[n];
        int k = 0;

        a[k] = '1';
         b[k] = '1'; 
         k ++;

         while(k!=s.size() and (s[k] == '0' or s[k] == '2'))
         {
             if(s[k] == '0')
             {
                 a[k] = '0';
                 b[k] = '0';
             }
               if(s[k] == '2')
             {
                 a[k] = '1';
                 b[k] = '1';
             }
             k++;
         }




        while(k!=s.size() and (s[k] == '0' or s[k] == '2'))
         {
             if(s[k] == '0')
             {
                 a[k] = '0';
                 b[k] = '0';
             }
               if(s[k] == '2')
             {
                 a[k] = '1';
                 b[k] = '1';
             }
             k++;
         }



           if(k != s.size()) {
            if(s[k] == '1') {
                a[k] = '1';
                b[k] = '0';
            }
            k ++;
        }


        while(k != s.size()) {
            a[k]= '0'; b[k] = s[k];
            k ++;
        }

        for(int i = 0; i < n; i ++)
            cout << a[i];
 
        cout << endl;
 
        for(int i = 0; i < n; i ++)
            cout << b[i];
    
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
	return 0;
}