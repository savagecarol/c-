#include<bits/stdc++.h>
using namespace std;

printGraph(vector<int> adj[],int v)
{
    for(int i=0;i<v;i++)
    {
        cout<<i;
         if(adj[i].size() != 0)
            cout << "-> ";
        for(auto itr=adj[i].begin();itr!=adj[i].end();)
        {
         cout<<*itr;
         itr++;
         if(itr!=adj[i].end())
            cout<<"-> ";
        }
        cout<<endl;
    }
    cout<<endl;
}


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int v,e;
        cin>>v;
        cin>>e;

        vector<int> adj[v];
        int a,b;
        for(int i=0;i<e;i++)
        {
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        printGraph(adj,v);
    }

}
