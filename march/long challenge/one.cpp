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


bool isPowerOfTwo (ll x) 
{ 
    return x && (!(x&(x-1))); 
} 

ll nextPowerOf2(ll n)  
{  
    ll p = 1;  
    if (n && !(n & (n - 1)))  
        return n;  
    while (p < n)  
       {
            p <<= 1;
       }      
    return p;  
}


vector<int> decToBinary(ll n) 
{ 
    int binaryNum[32]; 

    int i = 0; 
    vector<int> a;
    while (n > 0) { 
  
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
    for (int j = i - 1; j >= 0; j--) 
        a.push_back(binaryNum[j]);
    return a; 

} 



int togglebit(int n) 
{ 
    if (n == 0) 
        return 1; 
    int i = n; 
    n |= n >> 1; 
    n |= n >> 2; 
    n |= n >> 4; 
    n |= n >> 8; 
    n |= n >> 16; 
  
    return i ^ n; 
} 

int XNOR(int num1, int num2) 
{ 

    if (num1 < num2) 
        swap(num1, num2);  
    num1 = togglebit(num1); 
    
    return num1 ^ num2; 
} 

ll arr[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912,1073741824};
  
/* code */
void solve()
{
    ll c ;
    cin >> c ;


    int n = sizeof(arr)/sizeof(arr[0]); 
    int i = 0 ;
    for(i = 0 ; i<n;i++)
    {
        if(c<arr[i])
            break;
    }


    for(int j = 0 ; j < arr[i] ; j++)
    {
            int k = XNOR(13 ,10);

            cout << j << " " << k << endl ;        
    }


}



int main() {

	ll t;
    cin>>t;

    while(t--)
	{ 
	   solve();
       cout << endl;
	
    }
    return 0 ;
}