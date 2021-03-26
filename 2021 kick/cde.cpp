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


void solve(ll t)
{
    int n;
    int k;
    cin >> n >> k;
    char s[n];

    int i = 0 , j = n-1;
    for(int i = 0 ; i < n ; i++)
        cin >> s[i];
    
    int count = 0;
    for( i = 0 ; i < n; i++ )    
    {
        if(s[i] == '*')
                {

                    s[i] ='X';
                    count++;
                    break;
                }
    }

        for(j = n-1 ; j >=0; j-- )    
    {
        if(s[j] =='X')
            {
                cout << 1;
                return;
            }

        if(s[j] == '*')
                {

                    s[j] ='X';
                    count++;
                    break;
                    
                }
    }
    if(j>i)
     cout << count + (j-i)/ k;
     else
        cout << count ;
}

int main() {
    ll t;
    cin >> t;
    for(ll i =1 ; i <=t; i++)
         {
            solve(i);
            cout << endl;
        }
    return 0 ;
}

