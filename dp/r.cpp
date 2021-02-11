/* code by kartikeya sharma */
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

 string s;
 cin >> s;

    for(int i=0;i<s.length();i++)
    {

        if(i%2==0)
        {
            if(s[i]=='a')
                s[i]='b';       
            else
               s[i]= 'a'; 
        }
        else
        {
               if(s[i]=='z')
                    s[i]='y';
                else
                 s[i]='z';   
        }
    }

    cout << s;

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