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
 
	ll n;
	cin >> n;
	
    ll k ;
    cin >> k;

    if(k == 1)
        {
            cout << 1;
            return;
        }

    else if(n%2==0)
        {
            if(k>n)
                {
                 cout << (k%n) + 1;
                 return;
                }
            cout << k;
            return;
        }

    if(n/2 > k)
        {
        cout << k;
        return ;
        }


int a = 1;
int b = n;
    while(k > 1)
    {
        a++;
        b--;
        if(a>n)
             a=a%n; 
        if(b==0)
            b=b+n;

        if(a==b)
        {
            a=a+1;       
        }  

         if(a>n)
             a=a%n; 
        k--;        
    }    
    cout << a;
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