// *******************************- Bubble Sort -*******************************
#include <iostream>
using namespace std ; 

void bubbleSort(int arr[] , int &size ){
    int temp ; 
    for(int i=0 ; i<size-1;i++){
        for(int j=0 ; j<size-i-1 ; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =temp ; 
            }
        }
    }
    cout<<"Bubble Sort- Complexity O(n^2)\n";
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}

void selectionSort(int arr[],int &size){
   int i , j , min , temp ; 
   for(i=0 ; i<size ; i++){
        min = i ;

        for(j=i+1;j<size ; j++){
            if(arr[j]<arr[min]){
                min = j ;
            }
        }

        temp = arr[min];
        arr[min] = arr[i] ; 
        arr[i] = temp ;
   }

    cout<<"Selection Sort- Complexity O(n^2)\n";
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}

void insertionSort(int arr[] , int &size){
    int i,j;
    for(i=0; i<size ; i++){
        int temp =arr[i]; 
        for(j=i-1;j>=0;j--){
            if(arr[i]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp ; 
    }
    cout<<"Insertion Sort- Complexity O(n^2)\n";
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int size ; 
    int arr[size];
    cout<<"Enter Array Size: ";
    cin>>size;
    cout<<"Enter Array Value\n";
    for(int i=0 ; i<size ; i++){
        cout<<"val ["<<i<<"] : ";
        cin>>arr[i];
    }
    cout<<"\n";
    bubbleSort(arr, size);
    cout<<"\n";
    selectionSort(arr, size);
    cout<<"\n";
    insertionSort(arr, size);
}