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
#define inp(i,n,arr) for(int i=0 ; i<n ; i++) cin >> arr[i]
#define out(i,n,arr) for(int i=0 ; i<n ; i++) cout << arr[i] << " "
#define loop(i,n) for(int i=0;i<n;i++)

/* typedef */
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;




void leastPrimeFactor(int n)
{
    vector<int> least_prime(n+1, 0);
    least_prime[1] = 1;
 
    for (int i = 2; i <= n; i++)
    {
        if (least_prime[i] == 0)
        {
            least_prime[i] = i;
            for (int j = i*i; j <= n; j += i)
                if (least_prime[j] == 0)
                   least_prime[j] = i;
        }




        
                 for(int k = 0 ; k <=n ; k++)
            {
                cout << least_prime[k] << " ";
            }
            cout << endl;
    }

    for (int i = 1; i <= n; i++)
        cout << "Least Prime factor of "
             << i << ": " << least_prime[i] << "\n";
}
 
// Driver program to test above function
int main()
{
    int n = 20;
    leastPrimeFactor(n);
    return 0;
}

