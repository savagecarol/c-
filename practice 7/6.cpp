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

        string w="aeiou";
bool vow(char x){
  for(char ch:w)if(x==ch)return true;
  return false;
}

/*code*/
int main()
{
    int t;
    t=1;
    while(t--)
    {
  string s;
  cin>>s;
  int n=s.size();
  bool ok=true;
  for(int i=0;i<n;i++){
    if(!vow(s[i]) && s[i]!='n'){
      if(i+1>=n || !vow(s[i+1])){
        ok=false;
      }
    }
  }
  if(ok) cout << "YES" ;
  else cout << "NO";
	}
	return 0;
}
