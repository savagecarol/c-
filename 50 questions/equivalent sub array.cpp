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
int equivalent(int arr[] , int n)
{

            unordered_map<int, int>  m; 
        for (int i = 0; i < n; ++i) 
                m[arr[i]] = 1; 
            int k = m.size(); 
            int count = 0;
            m.clear();    
                

                for(int i=0;i<=(n-k);i++)
                {
                    unordered_set<int> b;
                    for(int j=i;j<n;j++)
                    {
                            b.insert(arr[j]);
                            if(b.size()==k)
                            {
                                count++;
                            }
                            if(b.size()>k)
                            {
                                    break;
                            }
                    }
                
                }
                return count;
            
                
}



void solve()
{
    int n;
    cin >> n;
    int arr[n];
    inp(i,n,arr);
    cout << equivalent(arr,n);
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