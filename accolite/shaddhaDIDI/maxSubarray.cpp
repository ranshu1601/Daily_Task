/* Given an integer array nums, find the subarray with the largest sum, and
 * return its sum. */


#include <iostream>
#include <vector>

using namespace std ; 

int main(){
    vector<int> arr;
    int length ; 
    cout<<"Length: ";
    cin>>length;

    for(int i=0 ; i<length ; i++){
        int value ; 
        cout<<"enter: ";
        cin>>value;
        arr.push_back(value);
    }

    int maxsum = INT_MIN;
    for(int i=0 ; i<length ; i++){
        int sum ;
        for(int j=0 ; j<=i ; j++){
            sum = sum+arr[j];
            maxsum = max(sum,maxsum);
        }
        
    }

    cout<<maxsum;
}
// [-2,1,-3,4,-1,2,1,-5,4]


//  Kadane's algorithm 



