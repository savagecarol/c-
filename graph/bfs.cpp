#include<bits/stdc++.h>
using namespace std;

vector<int> bfs(vector<int> adj[],int v)
{

    bool visited[v+1];

    for(int i=0;i<=v;i++)
    {
        visited[i]=false;
    }
    queue<int> q;
    visited[0]=true;
    q.push(0);



    vector<int> a;

    while(q.empty()==false)
    {
        int u=q.front();
        a.push_back(u);
        q.pop();
        for(int l:adj[u])
        {
            if(visited[l]==false)
            {
                visited[l]=true;
                q.push(l);
            }
        }
    }

            return a;

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
        vector<int> lol=bfs(adj,v);
        for(int i=0;i<lol.size();i++)
        {
            cout<<lol[i]<<" ";
        }
        cout<<endl;
    }

}

