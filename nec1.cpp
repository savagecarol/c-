#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int r = 0 ; r < t ; r++)
    {
    int n;
    cin >> n;
    string p = "";
    while(n>0)
    {
        if(n%2 == 0) p = p + "0";
        else p = p + "1";
        n = n/2;
    }
    for(int i = p.length()-1 ; i >=0 ; i--) cout << p[i];
    cout << endl;
    }
    return 0;
}