/* code by savagecarol */
#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    string str; cin >> str;    
    int count = 0;
    vector<pair<char , int>> r;
    r.push_back({str[0] , 1});
    int p = 0;
    for(int i = 1; i < str.length();i++)
    {
        if(str[i] == r[p].first) r[p].second++;
        else 
        { p++;r.push_back({str[i], 1});}
    }
    for(auto q : r) cout << q.first << q.second;
}