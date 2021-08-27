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

unordered_map<int , int> k;
void sieve()
{
    int p = 1;
    for(int i = 1 ; i<= 10000 ; i++)
    {   
        if(i%3==0 || i%10 == 3)
        {
            continue;
        }
        else k[p] = i;
        p++;
    }
}


int main()
 {
    sieve();
    ll t;
    cin >> t;
    for(ll i =1 ; i <=t; i++)
        {
            int n;
            cin >> n;
            cout << k[n] << endl;
        }
    return 0 ;
}