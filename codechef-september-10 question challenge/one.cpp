#include<iostream>
#include<unordered_set>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x;
        unordered_set<long long int> a;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x!=0)
                a.insert(x);
        }

            if(a.empty()==true)
                {
                cout<<0<<endl;
                continue;
                }

            cout<<a.size()<<endl;
    }
    return 0;
}
