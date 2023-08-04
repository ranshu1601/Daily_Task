// #include <iostream>
// using namespace std ; 

// void displayArr(int arr[] , int &n){
//     for(int i=0 ; i<n ; i++){
//         cout<<arr[i]<<" ";
//     }
// }

// void addVal(int arr[] , int &n , int value){
//     n = 2*n ; 
//     for(int i=0 ; i<n ; i++){
//         cout<<"Enter: ";
//         cin>>arr[i];
//     }

// }

// void insertVal(int arr[] , int &n , int index , int value){
//     for(int i=n ; i>index ; i--){
//         arr[i] = arr[i-1];
//         arr[index] = value;
//         n++;
//     }
    
// }

// int main(){
//     int n , index ,  value;
//     int arr[n];
//     cout<<"Enter Array size: "<<endl;
//     cin>>n;
//     for(int i=0 ; i<n ; i++){
//         cout<<"Enter: ";
//         cin>>arr[i];
//     }
//     displayArr(arr, n);
//     cout<<"Index: ";
//     cin>> index ;
//     cout<<"Value: ";
//     cin>> value ; 
//     insertVal(arr, n, index , value);
//     displayArr(arr, n);
// }

// #include <iostream>
// using namespace std ; 
// class Array{
//     public:
//         int A[10];
//         int size ; 
//         int length ; 
// };

// void Display(Array arr){
//     int i ; 
//     cout<<"arr.length: "<<arr.length<<endl ; 
//     for(i=0 ; i<arr.length ; i++){
//         cout<<arr.A[i]<<" ";
//     }
// }

// int main()
// {
// Array arr1={{2,3,4,5,6},10,5};
// // Append(&arr1,10);
// // Insert(&arr1,0,12);
// Display(arr1);
//  return 0;
// }


#include <iostream>
using namespace std  ;

class Array {
    public:
        int A[10];
        int length ; 
        int size ;

};

void displayArr(Array arr , Array length){
    for(int i=0 ; i<arr.length ; i++){
        cout<<arr.A[i]<<" ";
    }
}

void appendArr(Array *arr , int value){
    if(arr->length<arr->size){
        arr->A[arr->length++] = value;
    }

}
int main(){


}
