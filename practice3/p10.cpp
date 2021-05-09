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


bool palindrome(string string1)
{
    int length = string1.length();
        for(int i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
                return false;
   }
}
    return true;
}


bool cmp(string a , string  b)
{
    int n = a.length();
    int m = b.length();
    for(int i = 0 ; i < min(n , m) ;i++)
    {
        if(a[i] == b[i])
            continue;
        if(a[i] > b[i])
            return true;
        if(a[i] < b[i])
            return false;
    }
    if(m<=n)
        return true;
    else
        return false;
}


unordered_set<string> st;
void subsequence(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = str.length(); j > i; j--)
        {
            string sub_str = str.substr(i, j);
            st.insert(sub_str);
            for (int k = 1; k < sub_str.length() - 1; k++)
            {
                string sb = sub_str;
                sb.erase(sb.begin() + k);
                subsequence(sb);
            }
        }
    }
}
void solve()
{
    string s;
    cin >> s;
    subsequence(s);
    unordered_set<string> p;
    
    for(auto i:st)
    {
        if(palindrome(i))
        {
            p.insert(i);   
        }
    }

    for(int i = 0 ; i < s.length() ;i++)
    {
        string t(1 , s[i]);
           p.insert(t);
    }

    string x = *p.begin();
    for(auto i : p)
    {
         if(cmp(i,x)) 
         {
               x=i; 
         }
    }
    cout << x;
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