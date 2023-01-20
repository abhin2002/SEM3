#include<iostream>
using namespace std;

int matrixChainOrder(int* p,int i, int j){
    int mini = INT_MAX;
    int count;

    for(int k=i;k<j;k++){
        count = matrixChainOrder(p,i,k) + matrixChainOrder(p,k+1,j) + p[i-1]*p[k]*p[j];
        mini = min(count,mini);
    }

    return mini;
}

int main(){
    int n;
    cout<<"Enter the number of matrices : ";
    cin>>n;

    int m[n+1];
    for(int i=0;i<n+1;i++){
        cin>>m[i];
    }

    cout<<"Minimum number of multiplication : "<<matrixChainOrder(m,1,n);

    return 0;
}