#include<bits/stdc++.h>
using namespace std;
int recSearch(int arr[], int l, int n, int x)
{
    if (l==n)
        return -1;
    if (arr[l] == x)
        return l;
    return recSearch(arr, l + 1,n, x);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    int x;
    cin>>x;
    int i = recSearch(arr, 0, n - 1, x);
    if (i != -1)
    cout << i;
    else
    cout << "not present";
    return 0;
}

