#include<iostream>
using namespace std;

int main()
{

int t;
cin>>t;
while(t-->0)
    {
    int hashsize;
    cin>>hashsize;

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    vector<vector<int>> ht;

    ht=seperateChaining(int hashsize,int arr[],int n);

    for(int i=0;i<ht.size();i++)
            {
                if(ht[i].size>0)
                {
                    cout<<i<<"->";
                    for(int j=0;j<ht[i].size()-1;j++)
                    {
                     cout<<ht[i][j]<<"->";
                    }
                }
                cout<<ht[i][ht[i].size()-1];
                cout<<endl;

            }


            }
            return 0;

    }


vector<vector<int>> seperateChaining(int hashsize,int arr[],int n)
{
vector<vector<int>> ht;

for(int i=0;i<n;i++)
{   int s=hash(arr[i],hashsize);
    ht[s]=arr[i];
}

int hash(int k,l)
{
  return k%l;
}


