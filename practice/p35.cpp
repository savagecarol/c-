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

#define mod 1000000007
 ll dp[2000][2000];


/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/* code */


void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    inp(i , n , a);
    int taxi = 0, three =0, two = 0, one = 0;
    for(int i = 0 ; i <n;i++)
        {
            if(a[i] == 4)
                taxi++;
            if(a[i] == 3)
                {
                three++;
                }
            if(a[i] == 2)
                {
                two++;
                }
            if(a[i] == 1)
                {
                one++;
                }
        }

        if(three >= one)
        {
            taxi = taxi + three;
            one = 0;
            three = 0;
        }
        else
        {

            taxi = taxi + three;
            one = one - three;
            three = 0;
        }

        taxi = taxi + (two/2);

        if(two%2 != 0)
            one = one + 2;
        
    if(one%4 == 0)
        {
            taxi = taxi + one/4;
        }
    else
        {
            taxi = taxi + (one/4) +1 ;
        }
        cout << taxi;
}
 
int main(){
	solve();
	return 0;
}