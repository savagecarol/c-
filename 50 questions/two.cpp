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
void solve()
{

    int n;
    cin >> n;
    string a;

        cin >> a;

        int b[n];

        if(a[0] == '1')
            b[0]=2;
        else
            b[0]=1;
        
    cout<<1;

    for(int i=1;i<n;i++)
    {
        if(b[i-1] == 0)
        {
            if(a[i] == '1')
                 {
                    cout<<1;
                    b[i]=2;
                 }  
            else
            {
                cout<<1;   
                b[i] = 1;
            }
        
        }

        else if(b[i-1] == 1)
        {
              if(a[i] == '1')
                 {
                     cout<<1;
                    b[i]=2;
                 }  
            else
            {
                cout<<0;   
                b[i] = 0;
            }
            
        }
        else if(b[i-1] == 2)
        {

              if(a[i] == '1')
              {
                   cout<<0; 
                    b[i]=1;
              } 
            else
                {
                        cout<<1;
                        b[i]=1;
                }    
        }

    }

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