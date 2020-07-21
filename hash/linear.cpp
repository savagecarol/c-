#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> linear(int hashSize,int arr[],int N);
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

    vector<int> ht;
    ht=linear(hashsize,arr,n);
   for(int i=0;i<hashsize;i++)
    cout<<ht[i]<<" ";
            cout<<endl;
            }
            return 0;
}

vector<int> linear(int hashSize,int arr[],int N)
{
    vector<int> s;

    for(int i=0;i<hashSize;i++)
    {
        s.push_back(-1);
    }
    int key;
    for(int i=0;i<N;i++)
    {
     key=arr[i]%hashSize;
     while(s[key]!=-1)
        {
    key=((++key)%hashSize);
           if(-1==s[key])
            break;
         }
    s[key]=arr[i];
    }
    return s;
}


