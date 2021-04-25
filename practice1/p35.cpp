/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;
 
/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define zero() cout << "0"
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
 
 
/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
/* code */ 
vector<int> p(1000000+1, 0);
void seive(){
    p[1] = p[0] = 0;
 
    for(ll i = 3; i <= 1e6; i += 2){
        p[i] = 1;
    }
    for(ll i = 3; i <= 1e6; i += 2){
        if(p[i]){
            for(ll j = i*i; j <= 1e6; j += i)
                p[j] = 0;
        }
    }
    p[2] = 1;
}
int main(){
    seive();
    ll t;
    cin>> t;
    loop(i , t){
        ll n;
        cin >> n;   
        if(ceil(sqrt(n)) == floor(sqrt(n)) && p[(int)sqrt(n)])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}