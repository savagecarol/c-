#include<bits/stdc++.h>
using namespace std;
unordered_map< string , char> mp;
void solve()
{   
    int n;
    cin>>n;
    string str;
    cin>>str;
    string a = "";
    for(int i=0;i<n;i=i+4)
    {
        string p = "";
        p =  p + str[i] + str[i+1] + str[i+2] + str[i+3] ; 
        a= a+ mp[p];
    }
    cout<< a << endl;
}

int main()
{
    
mp["0000"] = 'a';
mp["0001"] = 'b';
mp["0010"] = 'c';
mp["0011"] = 'd';
mp["0100"] = 'e';
mp["0101"] = 'f';
mp["0110"] = 'g';
mp["0111"] = 'h';
mp["1000"] = 'i';
mp["1001"] = 'j';
mp["1010"] = 'k';
mp["1011"] = 'l';
mp["1100"] = 'm';
mp["1101"] = 'n';
mp["1110"] = 'o';
mp["1111"] = 'p';
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

return 0;
}