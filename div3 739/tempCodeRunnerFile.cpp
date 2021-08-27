#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a , b , c;
        cin >> a >> b >> c ;
        if(b<c) 
        {
            cout << -1 <<endl; continue;
        }
        int val = a*c;
        if(val%b==0)
            cout << val/b;
        else cout << val/b+1;
        cout << endl;
    }
}