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

/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/* code */
void solve()
{
    int x , y;
    cin >> x >> y ;

    string s;
    cin >> s;

	int u = 0 , d = 0 , r = 0 , l = 0;

	for(int i=0;i< s.length() ;i++)
	{
		if(s[i] == 'U')
			u++;
		
		else if(s[i] == 'D')
			d++;
		
		else if(s[i] == 'R')
			r++;
		
		else if(s[i] == 'L')
			l++;

	}

	int U=0 , D = 0 , R = 0 , L = 0;


	if(y >= 0)
	{
		U = abs(y);
	}
		
	if(y <= 0)
	{
		D = abs(y);
	}

	if(x >= 0)
	{
		R = abs(x);
	}	

	if(x <= 0)
	{
		L = abs(x);
	}


	

	if( r >= R && d >= D && l >= L && u >= U )
		yes();
	else	
		no();
}


int main() 
{
	
	int t;
	cin>> t;
	while(t--)
	{
	    
	   solve();
       cout<<endl;
	}

	return 0;
}