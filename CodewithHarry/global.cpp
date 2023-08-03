#include <iostream>
using namespace std ; 
int a = 10;
int *b = &a ; 
int Arr[] = {1,5,8,9};

int main(){
    // you cannot store an address in a variable u need a pointer to point on an address of a variable 
    cout<<"it stores address of arr: "<<Arr<<endl;
    cout<<"using defrencing operator: [prints 1st element of index 0]  "<<*Arr<<endl;
    cout<<"using defrencing operator: [prints 2nd element of index 1]  "<<Arr+1<<endl;
    int i=0;
    do {
    cout<<"address of value at index "<<i<<"  " <<Arr+i<<" value at that address is "<<*(Arr+i)<<endl;
   
    i++;

    }while (i<4);

      int ary[][5] = { {1, 2, 3, 4, 5},
                   {6, 7, 8, 9, 0}
                 };

     int rows = sizeof ary / sizeof ary[0]; // 2 rows  

     int cols = sizeof ary[0] / sizeof(int); // 5 cols
     cout<<ary[0];

}