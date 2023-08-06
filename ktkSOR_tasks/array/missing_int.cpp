// Find the missing integer
#include <iostream>
using namespace std ; 

int findmissing(int arr[], int n){
    int ans ;
    int last = arr[n-1];
    int start = arr[0];
    for(int i=1 ; i<n;i++){
        if(start){
            continue;
        }
        else ans=i ; break;
    } 
    return ans;

}

int main(){
    int size ; 
    cout<<"Enter array size: ";
    cin>>size;
    int *arr = new int[size];
    cout<<"Enter array---"<<endl;
    for (int i = 0; i < size; i++) {
         cout << "enter: ";
         cin >> arr[i];
    }

    cout<<findmissing(arr, size);


}
