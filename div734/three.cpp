/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;
 
/* predefined value */
#define yes() cout << "YES" 
#define no() cout << "NO"
#define one() cout << "1"
#define zero() cout << "0"
#define ll long long int
#define mp make_pair
#define fi first
#define se second
#define pb push_back
 
/* loops */
#define inp(i,n,arr) for(ll i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(ll i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(ll i=0;i<n;i++)
#define arrs(i,n,arr,sum) for(ll i = 0 ; i < n ; i++) sum = sum + arr[i];
#define arrmax(i , n , arr , maxx) for(ll i = 1 ; i < n;i++) maxx = max(maxx , arr[i]);
#define arrmin(i , n , arr , minn) for(ll i = 0 ; i < n;i++) minn = min(minn , arr[i]); 
 
 
/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

/*code*/

int main() 
{
    ll t;
    cin >> t;
    while(t--)
    {   
        ll n , k;
        cin >> n >> k;
        int a[n];
        int b[n] = {0};
        unordered_map<int , vector<int>> p;
        for(int i = 0 ; i < n ; i++)
        {
                cin >> a[i];
                p[a[i]].push_back(i);  
        }
        
        int var = 1;
        for(auto r : p)
        {
            if(r.second.size()>=k)
            {
                    int lol = 1;
                    for(int i = 0 ; i < r.second.size() ; i++)
                    {
                        if(lol > k) b[r.second[i]] = 0;
                        else {b[r.second[i]] = lol; lol++ ;} 
                    }           
            }
            else
            {
                if(var>=k) var = 1;        
                for(int i = 0 ; i < r.second.size();i++)
                {
                        b[r.second[i]] = var; 
                        var++; 
                }
            }
        }


        int arr[k] = {0};
        for(int i = 0 ; i < n ; i++) arr[b[i]-1]++;
        int val = *min_element(arr , arr+k);
        for(int i = 0 ; i < k ; i++) arr[i]=arr[i] - val;
        for(int i = 0 ; i < n ; i++)
        {
            if(arr[b[i]-1] == 0) cout << b[i] << " ";
            else {cout << 0 << " "; arr[b[i]-1]--;}
        }
        cout << endl;
    }
}
