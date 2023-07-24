// Given an array of n numbers , give an algorithm for checking whether there are any duplicate elements in the array or not .

#include <iostream>
using namespace std ; 

void checkDuplicate(int arr[], int n ){
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]==arr[j]){
                cout<<"Duplicate exists: "<<arr[i];
                return ; 
            }
        }
    }
    cout<<"No Duplicate present ";

}


int main(){
    int size ; 
    int *arr = new int[size];
    cout<<"Enter array size: ";
    cin>>size;
    cout<<"Enter Array-- "<<endl;
    for(int i=0 ; i<size ; i++){
        cout<<"enter: ";
        cin>>arr[i];
    }

    checkDuplicate(arr, size);

}