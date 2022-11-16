#include <iostream>
using namespace std;

int partition(int* A,int p,int r){
    int x=A[r];
    int i=p-1;

    for(int j=p;j<=r-1;j++){
        if(A[j]<=x){
            i=i+1;
            int temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
        
    }
    int temp=A[i+1];
    A[i+1]=A[r];
    A[r]=temp;
    return i;
}
void quick_sort(int A[],int p,int r){
    if(p<r){
        for(int i=0;i<9;i++)
            cout<<A[i]<<" ";
        cout<<"\n";
        int q=partition(A,p,r);
        quick_sort(A,p,q-1);
        quick_sort(A,q+1,r);
    }
    
}

int main(){
    int n=9;
    int* A = new int[n];
    A[0] = 12;
    A[1] = 11;
    A[2] = 1;
    A[3] = 2;
    A[4] = 42;
    A[5] = 8;
    A[6] = 5;
    A[7] = 16;
    A[8] = 10;
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    cout<<"\n";
    quick_sort(A,0,n-1);
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";

    return 0;
}
