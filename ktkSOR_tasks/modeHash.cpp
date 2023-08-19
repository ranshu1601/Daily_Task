#include <iostream>
#include <unordered_map>

using namespace std ; 

int modeNum(int arr[] , int size){
    unordered_map<int , int> modeMap ;
    int maxVal=0 , mode;

    for(int i=0 ; i<size ;i++){
    modeMap[arr[i]]++;
    }

    unordered_map<int , int> :: iterator it ;
     for (it = modeMap.begin(); it != modeMap.end(); it++){
     if(size==1){
        return 0 ;
     }
     else {
        if(it->second > maxVal){
            maxVal = it->second;
        }
     }

     }

     return maxVal ;

}

int main(){
    int size;
    cout<<"size";
    cin>>size;

    int *arr = new int[size];
    for(int i=0 ; i<size ; i++){
    cin>>arr[i];

    cout<<modeNum(arr , size) ;
    }
}