// Union of two Array 
#include<iostream>
using namespace std ; 

int main(){
    int size1 , size2 ; 
    int arr1[size1] , arr2[size2]  , arr3[size1+size2];
    cout<<"Enter size of Arr1: ";
    cin>>size1;

    for(int i=0 ; i<size1 ; i++){
        cout<<"val["<<i<<"]: ";
        cin>>arr1[i];
    }

    cout<<"Enter size of Arr2: ";
    cin>>size2;

    for(int i=0 ; i<size2 ; i++){
        cout<<"val["<<i<<"]: ";
        cin>>arr2[i];
    }

    // Union
    int i=0;
    while(i<size1){
        arr3[i] = arr1[i];
        i=i-1;
    }

    for(int i=0 ; i<size1; i++){
        cout<<arr3[i];
    }

}
