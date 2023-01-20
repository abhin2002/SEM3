#include <iostream>
using namespace std;

int partision(int* A, int p, int r){

    int x = A[r];
    int i = p-1;

    for(int j=p;j<=r-1;j++){
        if(A[j] <= x){
            i = i+1;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[r]);

    return i+1;
    
}

void quickSort(int* A,int p, int r){
    if(p<r){
        int q = partision(A,p,r);
        quickSort(A,p,q-1);
        quickSort(A,q+1,r);
    }
}

int main(){

    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;

    int A[n];
    cout<<"Enter the elements :\n";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Befoer sort : \n";
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    quickSort(A,0,n);
    cout<<"\nAfter sort : \n";
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}