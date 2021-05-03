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

/* code */






void solve()
{
   int n;
   cin >> n;
   unordered_map<int , int> m;
    int arr[n];
   inp(i , n ,arr); 

    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
                {
                if(i==j)
                    a[i][j]=arr[i];
                else
                    a[i][j]=0;
                }
    }


    for(int i = 0 ; i < n;i++)
    {
             int num=arr[i],i1=i , j1=i1-1;
                  while((num-1)!=0){
                          if(j1==-1){
                                  j1++;
                                  i1++;
                          }
                          if(a[i1][j1]!=0){
                                  i1++;
                                  j1++;  
                          } 
                          else{
                                  a[i1][j1]=arr[i];
                                  j1--;
                                  num--;
                          }
                  }
    }

              for(int i=0;i<n;i++){
                  for(int j=0;j<=i;j++)
                        cout<<a[i][j]<<" ";
                  cout<<"\n";
          }
          




}

int main() 
{
	
	int t;
	t = 1;
	while(t--)
	{
	   solve();
	}

	return 0;
}