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
int gcd (int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
int countSetBits(int n){
    unsigned int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
        }
    return count;
}

 int powerOfTwo(int n)
    {
        return n && (!(n & (n-1)));
    }


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




char a[26];
void printAllKLengthRec(char set[], string prefix,int n, int k , string s , int &count)
{
    if (k == 0)
    {
         if(prefix<s && isPalindrome(prefix)) count++;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        string newPrefix;
        newPrefix = prefix + set[i];
        printAllKLengthRec(set, newPrefix, n, k - 1 , s , count);
    }
 
}
 
/*code*/
void solve(ll tt) 
{
    ll n , k;
    cin >> n >> k;
    string s;
    cin >> s;
    int count = 0;
    printAllKLengthRec(a, "", k, n , s , count);
    cout << count;
}

int main() 
{
        int p=0;
    for(char i = 'a' ; i<='z';i++)
    {
            a[p] = i;
            p++;
    }

	ll t;
    cin >> t;
	for(int i = 1 ; i <= t ;i++)
	{
	   solve(i);
       cout << endl;
	}
	return 0;
}
