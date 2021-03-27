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

/* code */


void ara(int n)
{

    for(int i = 0 ; i < n ; i++)
    {   
        a.push_back(i+1);
    }
}


void right( int p , int q)
{
    int temp = a[q], i;
    for (i = q; i >p ; i--)
        a[i] = a[i-1];
    a[p] = temp;
}

void fun(int n , int t ,int lol)
{
    unordered_map<int , vector<int>> p;
    int k = n-1;
    for(int i = n-1 ; i >0 ;i--)
    {
        p[k] = a;
        k++;
        int j = i+2;
        while(j<n)
        {
            right(i , j);
            p[k] = a;
            k++;
            j++;
        }

        int temp = a[i];
        a[i] = a[i-1];
        a[i-1] = temp;
    }
    p[k] = a;
    k++;
    int i = 0;
    int j = i+2;
       while(j<n)
        {
            right(i , j);
            p[k] = a;
            k++;
            j++;
        }

       if(p.find(lol) != p.end())
    {
        cout << "Case #" << t<<": ";
        vector<int> r = p[lol];
        for(int i = 0 ; i < n ; i++)
            {
                cout << r[i] << " ";
            }
    }
    else
        cout << "Case #" << t<<": "<<"IMPOSSIBLE";

}
void solve(ll t)
{
    int n ; int k ;
    cin >> n >> k ;
    ara(n);
    fun(n , t , k);
}

int main() {	
	int t;
	cin>> t;
	for(int i = 1 ; i <=t ; i++)
	{
	   solve(i);
       cout<<endl;
       a.clear();
	}
	return 0;
}