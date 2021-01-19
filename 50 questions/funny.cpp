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

void Funny()
{
    cout << "Funny" ;
}

void NotFunny()
{
    cout << "Not Funny" ;
}






void solve()
{

	string s1;
	cin >> s1;
	 int n = s1.length();

	string s2="";
 	for (int i=s1.length()-1; i>=0; i--) 
      s2+=s1[i];

	
	for(int i=0;i<n-1;i++)
	{
		if( abs(s1[i+1] - s1[i]) != abs(s2[i+1] - s2[i]))
		{
			cout << s1[i+1] - s1[i];
			NotFunny();
			return;
		}
	}
	Funny();
	return;
}

int main() {
	
	int t;
	cin>> t;
	while(t--)
	{
	    
	   solve();
       cout<<endl;
	}

	return 0;
}