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
#define inp(i,n,arr) for(ll i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(ll i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(ll i=0;i<n;i++)
#define arrs(i,n,arr,sum) for(ll i = 0 ; i < n ; i++) sum = sum + arr[i];
#define arrmax(i , n , arr , maxx) for(ll i = 1 ; i < n;i++) maxx = max(maxx , arr[i]);
#define arrmin(i , n , arr , minn) for(ll i = 0 ; i < n;i++) minn = min(minn , arr[i]); 
 
 
/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/* power function */
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int countSetBits(int n){
    unsigned int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
        }
    return count;
}

string decToBinary(int n)
{
    string x="";
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            x=x+"1";
        else
            x=x+"0";
    }
    return x;
}

/*code*/
void solve() 
{
    string s;
    cin >> s;
    s = "WUB"+ s + "WUB";
    int n = s.size();
    for(int i = 0 ; i < n;)
    {
        int j = i;
        while(j < n)
        {
            if(s[j] == 'W' && s[j+1] == 'U' && s[j+2] == 'B') j = j+3;
            else break; 
        }
        while(j < n)
        {
            if(s[j] == 'W' && s[j+1] == 'U' && s[j+2] == 'B')
                break;
            cout << s[j];
            j++; 
        }
        cout << " ";
        i=j;
    }

}
int main() 
{	
	ll t;
    t=1;
	while(t--)
	{
	   solve();
       cout << endl;
	}
	return 0;
}
