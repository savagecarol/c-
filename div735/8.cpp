/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;

/*code*/
int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<string> a(n);
        for(int i = 0 ; i < n; i++)
        {
            cin >> a[i];
        }

        bool flag = true;
        for(int i = 0 ; i < n; i++)
        {
            for(int j = 0 ; j < n; j++)
            {
                    if(a[i][j] != a[j][i])
                    {
                         flag = false;
                         break;
                    }
            }
        }
        if(flag) cout << "YES" ;
        else cout << "NO";
        cout << endl;
    }    
}
