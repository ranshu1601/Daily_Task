#include<iostream>
using namespace std ; 

int main(){
    int arr1[] = {3,8,16,20,25};
    int arr2[] = {4,10,12,22,23};
    int arr[20];
    for(int i=0 ; i<6 ; i++){
        if(arr1[i]<arr2[i]){
            arr[i] = arr1[i];
            continue;
        }
        else {
            arr[i] = arr1[i];
            continue;
        }
    }
    
}