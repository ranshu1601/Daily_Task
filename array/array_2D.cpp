// #include <iostream>
// using namespace std;

// int main(){
//     int arr[4]={1,2,3,4};
//     int arR[3][2] = {4,2,4};
// ;} 

#include<iostream>
using namespace std;
// int main(){
//     int arr[2][3]={{3,1,2},{9,5,1}};
//     int n = sizeof(arr)/sizeof(int);// number of elements in a 2D array 
//     int rows = sizeof(arr)/ sizeof(arr[0]);
//     int cols = sizeof(arr[0])/ sizeof(int);
//     cout<<sizeof(int)<<endl;
//     cout<<rows<<endl;
//     cout<<cols<<endl;
//     cout<<n<<endl;
//     for(int i=0; i<2;i++){
//         for(int j=0; j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//     }
// }

int main(){
    int **arr ;
    arr = new int*[3];
    arr[0] = new int[4];
    arr[1] = new int[1];
    arr[2] = new int[3];
    for(int i=0; i<3;i++){
        for(int j=0; j<4;j++){
            cout<<arr[i][j]<<" ";
        }
    }

}