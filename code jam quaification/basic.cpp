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
void solve(int t)
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0 ; i < n; i++)
		{
			cin >> a[i];
		}
	int count = 0 ;
	for(int i = 0 ; i < n-1 ; i++)
	{		
		int minn = i;
		for(int j = i ; j < n ; j++)
			{
				if(a[j] <a[minn])
				{
						minn = j;
				}	
			}

		count = count + (minn - i +1);
		int k = i;	

		while(minn > k)
			{
				int temp = a[k];
				a[k] = a[minn];
				a[minn] = temp;
				minn--;
				k++;
			}

	}
	cout << "Case #" << t<<": "<<count ;
}
int main() {	
	int t;
	cin>> t;
	for(int i = 1 ; i <=t ; i++)
	{
	   solve(i);
       cout<<endl;
	}
	return 0;
}