
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

int max(int a, int b)
{
	return (a > b)? a : b;
}

int lcs( string X, string Y, int m, int n )
{
	int L[m + 1][n + 1];
	int i, j;
	for (i = 0; i <= m; i++)
	{
		for (j = 0; j <= n; j++)
		{
		if (i == 0 || j == 0)
			L[i][j] = 0;
	
		else if (X[i - 1] == Y[j - 1])
			L[i][j] = L[i - 1][j - 1] + 1;
	
		else
			L[i][j] = max(L[i - 1][j], L[i][j - 1]);
		}
	}
	return L[m][n];
}