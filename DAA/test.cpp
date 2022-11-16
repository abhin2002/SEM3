#include<iostream>
using namespace std;

int main(){
    int A[13] = {12,45,32,15,2,8,66,75,36,23,22,85,1};
    for (int i = 0; i <13; i++)
    {
        cout<<A[i]<<" "; 
    }
    cout<<"\n";
    cout<<sizeof(A)/sizeof(A[0]);
    partition( A,1,13);
    return 0;
}

void partition(int A[13],int beg,int end){
   
    int pivot = A[beg];
    int lb = beg;
    int ub = end;
    int temp;
    while(lb<ub){
        while(A[lb]<=pivot){
            lb++;
        }
        while(A[ub]>pivot){
            ub--;
        }
        if(lb<ub){
            temp = A[lb];
            A[lb]=A[ub];
            A[ub]=temp;
        }
    }
    temp = A[beg];
    A[beg] = A[ub];
    A[ub] = temp;
    cout<<"\n"<<temp<<" "<<A[beg]<<" "<<A[ub];
    
}