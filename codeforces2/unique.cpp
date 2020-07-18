#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
int t;
cin>>t;
while(t-->0)
    {int n;
    cin>>n;
    int arr[2*n];
    for(int i=0;i<(2*n);i++)
        {cin>>arr[i];}

    unordered_set <int> s;
    for(int i=0;i<(2*n);i++)
    {
        if(s.find(arr[i])==s.end())
        {
            s.insert(arr[i]);
            cout<<arr[i]<<" ";
        }
    }
    }
return 0;
}
