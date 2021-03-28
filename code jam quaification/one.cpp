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
bool sortbysec( pair<int,int> a,
               pair<int,int> b)
{
    return (a.second < b.second);
}


void solve(int t)
{

    int n;
    int x;
    cin >> n>> x;

    vector<pair<int ,int >> a;
    int p , q;
    for(int i = 0 ; i < n; i++)
        {
            cin >> p >> q;
            pii r = mp(p , q);
            a.push_back(r);
        }
    
    sort(a.begin(), a.end(), sortbysec);
    int i = n-1;
    int count = 0;
    while(i>=0)
    {
        if(a[i].first <= x)
        {
            cout << a[i].second;   
            break;
        }
        i--;
    }
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
