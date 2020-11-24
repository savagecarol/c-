#include<bits/stdc++.h>
using namespace std;

int path(vector<int> g[],int s,int d, bool visit[])
{
    return 0;
}




int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> g[n+1];
        bool visit[n] = {false};
        for(int i=0;i<n;i++)
            {   int x,y;
                 cin>>x;
                cin>>y;
                g[x-1].push_back(y-1);
            }
        cout<<path(g,0,n-1,visit)<<endl;
    }
}
