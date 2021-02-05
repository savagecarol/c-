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


vector<pair<int , int>> countFreq(int arr[], int n) 
{ 
    // Mark all array elements as not visited 
    vector<bool> visited(n, false); 
  vector<pair<int , int>> d ;
    // Traverse through array elements and 
    // count frequencies 
    for (int i = 0; i < n; i++) { 
  
        // Skip this element if already processed 
        if (visited[i] == true) 
            continue; 
  
        // Count frequency 
        int count = 1; 
        for (int j = i + 1; j < n; j++) { 
            if (arr[i] == arr[j]) { 
                visited[j] = true; 
                count++; 
            } 
        } 

           d.push_back(make_pair(arr[i] , count));
    
    } 







/* code */
void solve()
{
    int n , m;
    cin >> n >> m;
    int a[n];
    int b[n];
    int c[m];
    inp(i , n , a);
    inp(i , n , b);
    inp(i , n , c);

    vector<int> mk;

    for(int i = 0 ; i < n ; i++)  
    {
        if(a[i]!=b[i])
            mk.push_back(a[i]);
    }

    if(mk.size()> m)
        no();
    if(mk.size() < m)
    {
        vector<pair<int , int>> p = countFreq(a , n);

        vector<pair<int , int>> q = countFreq(c , m);
        
        
    }




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