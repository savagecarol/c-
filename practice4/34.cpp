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

/* power function */
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int countSetBits(int n){
    unsigned int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
        }
    return count;
}

string decToBinary(int n)
{
    string x="";
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
            x=x+"1";
        else
            x=x+"0";
    }
    return x;
}

/*code*/
void solve() 
{
    ll n;
    cin >> n;
    string s1;
    cin >> s1;
    string s2 = "";
    vector<int> k;
    for(int i = 0 ; i <n ;i++)
    {
        s2 = s2 + s1[n-i-1];
        if(s1[i] == '0')
            k.push_back(i);
    }
    int alice = 0 , bob = 0;
    bool turn = true , cont = true;
    int count = k.size();
    while(count > 0)
    {
        if(s1!=s2 && cont == true)
        {
             cont = false;
             if(turn)turn = false;
             else turn = true;    
        }
        else
        {
        int i = 0;
        for(i = 0 ; i < count; i++)
            {   
                s1[k[i]] = '1';
                s2[n-k[i]-1] = '1';
                if(s1 == s2)
                    {
                        break;
                    }
            else
                {
                s1[k[i]] = '0';
                s2[n-k[i]-1] = '0';
                }    
            }
            if(i==count)
            {
                s1[k[i-1]] = '1';
                s2[n-k[(i-1)]-1] = '1';
            }
            else
            {
                k.erase(k.begin()+i);
            }
                     if(turn)
                        {
                        alice++;
                        turn = false;
                        }
                        else
                        {
                        bob++;
                        turn = true;
                        }                   
       
            count--;
            cont = true;
        }
    }

    if(bob > alice)
        cout <<"ALICE";
    else if(alice > bob)
        cout <<"BOB";
    else
        cout <<"DRAW";
}
int main() 
{	

	ll t;
    cin >> t;
	while(t--)
	{
	   solve();
       cout << endl;
	}
	return 0;
}
