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

float s(float var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

void solve()
{
    int n;
    cin >> n;
    char r;
    bool count = false;
    int x , y , w , z;

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ;j++)
        {
            cin >> r;
            if(r == '*' && count == false)
            {
                x=i;
                y=j;
                count = true;
            }
            if(r == '*' && count == true)
            {
                w=i;
                z=j;
            }
        }
    }

    int a , b , c , d;


    if(x==w)
    {
        if(x==0 && w==0)
       {    a=x+1;
            c=x+1;
        }
        else if(x== n-1 && w== n-1)
        {
            a=x-1;
            c =x-1;
        }
        else
        {
            a=x+1;
            c=x+1;
        }
        b=y;
        d=z;
    }


    else if(y==z)
    {
        if(y==0 && z==0)
       {    b=y+1;
            d=y+1;
       }
        else if(y== n-1 && z == n-1)
        {
            b=y-1;
            d=y-1;
        }
            else
        {
            b=y+1;
            d=y+1;
        }
        a=x;
        c=w;
    }

    else 
        {
            a=x;
            b=z;
            c=w;
            d=y;
        }

    

     for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ;j++)
        {
                if(i == x && j == y)
                    {
                        cout << '*';
                        continue;
                    }
                if(i == w && j == z)
                    {
                        cout << '*' ;
                        continue;
                    }
                      if(i == a && j == b)
                    {
                        cout << '*' ;
                        continue;
                    }
                      if(i == c && j == d)
                    {
                        cout << '*';
                        continue;
                    }
                    cout << '.' ; 
        }
        cout << endl;
    }

}
int main()
 {
     int t;
     cin >> t;
     while(t--)
     {
            solve();
     }
            return 0 ;
}