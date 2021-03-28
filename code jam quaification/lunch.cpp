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

vector<int> a;



void solve(int t)
{
    int n ;
    cin >> n;
    int a[n];

    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    
    int b[n] ;

    for(int i = 0 ; i < n; i++)
    {
              int count = 0;
                int j = i+1;
       while(j < n) 
        {
        if(a[j] == a[i])
                {
            count++;
                }
        if(a[j] > a[i])
                {
            break;
                }
                j++;
        }

            j = i-1;   
        while(j >= 0)
        {
             if(a[j] == a[i])
                {
            count++;
                }
        if(a[j] > a[i])
                {
            break;
                }
                j--;
        }

        b[i] = count;
    }

    for(int i = 0 ; i < n; i++)
        cout << b[i] << " ";

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
