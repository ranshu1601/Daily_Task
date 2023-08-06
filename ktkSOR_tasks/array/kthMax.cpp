#include<iostream>
#include<vector>
#include<queue>
#include<map>

using namespace std ; 
// class Solution {
// public:
//     int findKthLargest(vector<int>& v, int k) {
//         priority_queue<int> pq;
//         int n = v.size();

//         for(int i = 0;i < n;i++) pq.push(v[i]);
//         while(--k) pq.pop();
        
//         return pq.top();
//     }
// };

// Time Complexity : O(n * logn)
// Space Complexity : O(1)

int main(){
    vector<int> arr ; 
    priority_queue<int> pq;
    int k , size,val; 

    cout<<"Enter size of array: ";
    cin>>size ; 

    for(int i=0 ; i<size ; i++){
        cout<<"Enter: ";
        cin>>val;
        arr.push_back(val);
    }
    for(int i=0 ; i<size ; i++){
        pq.push(arr[i]);
    }
    cout<<"Enter Kth : ";
    cin>>k;
    for(int i=0 ; i<k-1;i++){
        pq.pop();
    }
    cout<<"Top: "<<pq.top();

}