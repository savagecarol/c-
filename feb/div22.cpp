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
    int n , k;
    cin >> n >> k ;

    int arr [n];
    inp(i , n , arr);
    int i = 0 , j = 0;
    for(i=0; i<k ; i++)
    {
        for(j = 0 ; j <  n-1 ; j++)
        {
                if(arr[j] < arr[j+1])
                {
                    arr[j]  = arr[j] + 1;
                    break;
                }
        }

        if(j == n-1)
        {
            cout << -1; 
            return;
        }
    
    }   

      cout << j + 1;
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