
#include <bits/stdc++.h> 
using namespace std; 
  
int lengthOfSmallestSubsequence(int K, vector<int> v) 
{ 
    priority_queue<int> pq; 
  
    for (int i = 0; i < v.size(); i++) { 
        pq.push(v[i]); 
    } 
    int sum = 0, count = 0; 

    while (!pq.empty() && sum < K) {
        cout<<pq.top()<<" "; 
        sum += pq.top(); 
        pq.pop(); 
        count++; 
    } 
    if (sum < K) { 
        return -1; 
    } 
    return count; 
} 
  
int main() 
{ 
  
    vector<int> v{ 2, 3, 1, 5, 
                   6, 3, 7, 9, 
                   14, 10, 2, 5 }; 
    int K = 35; 
  
    cout << lengthOfSmallestSubsequence(K, v); 
  
    return 0; 
} 