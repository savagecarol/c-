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
void solve(ll t)
{
    int count = 0 ;
    int x ;
    int y;
    cin >> x >> y ;
    string s;
    cin >> s;
    int n = s.length();
    bool ques = false;
    for(int i = 0 ; i < n-1 ;)
        {
            if(s[i] == '?')
                ques = true;

            if(ques == false)
            {
                if(s[i] == 'C' && s[i+1] == 'J')
                    {
                        count = count + x;
                    }
                else if(s[i] == 'J' && s[i+1] == 'C')
                    {
                        count = count + y;
                    }
                    i++;
            }

            if(ques == true)
                {

                    int k = i+1 ;
                    for( k = i+1 ; k < n ; k++)
                    {
                        if(s[k] == 'J')
                            {
                                break;
                            }
                        if(s[k] == 'C')
                            {
                                break;
                            }
                    }
                    if(i!=0 && k !=n)
                    {
                        if(s[i-1] == 'J' && s[k] == 'C')
                            {
                                count = count + y;
                            }
                        else if(s[i-1] == 'C' && s[k] == 'J')
                            {
                                count = count + x;
                            }
                    }
                    i = k;
                    ques = false;
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