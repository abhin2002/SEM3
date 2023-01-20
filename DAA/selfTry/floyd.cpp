#include<iostream>
using namespace std;
int n=4;
int inf = 9999;

void floyd(int** a){
    int k,i,j;
    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(a[i][j] > (a[i][k] + a[k][j]) && a[i][k] != inf && a[k][j] != inf){
                    a[i][j] = a[i][k] + a[k][j];
                }
            }
        }
    }
}

int main(){
    int** a = new int*[4];
    for(int i=0;i<4;i++){
        a[i] = new int[4];
    }
    cout<<"Enter the matrix : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    floyd(a);
    cout<<"\nDistance matrix : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

}