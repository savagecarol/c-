#include <bits/stdc++.h>
using namespace std;

int bSearch(int arr[], int l, int r, int x)
{
    if (r>=l)
        {
        int mid = l + (r-l)/2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid]>x)
            return bSearch(arr, l, mid - 1, x);
        return bSearch(arr, mid + 1, r, x);
    }
    return -1;
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
    int i = bSearch(arr, 0, n - 1, x);
    if (i != -1)
    cout << i;
    else
    cout << "not present";
    return 0;
}
