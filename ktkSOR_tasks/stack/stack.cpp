#include <iostream>
using namespace std ; 

class stack{
    public:
        int top;
        int size;
        int *S; //to store array
};

void create(stack *ktk){
    cout<<"Enter Size: ";
    cin>>ktk->size;
    ktk->top = -1;
    ktk->S = new int[ktk->size];

}

void display(stack ktk){
    int i;
    for(i=ktk.top;i>=0;i--){
        cout<<ktk.S[i];
    }
    cout<<"\n";
}