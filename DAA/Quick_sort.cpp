#include <iostream>
using namespace std;

int partition(int *data,int begin,int end);

void quickSort(int *data,int begin,int end){
    int loc;
    if(begin<end){
        loc = partition(data,begin,end);
        quickSort(data,begin,loc-1);
        quickSort(data,loc+1,end);
    }
}

int partition(int *data,int begin,int end){
    int pivot = data[begin];
    int lb = begin;
    int ub = end;
    int temp;
    while(lb<ub){
        while(data[lb]<=pivot){
            lb++;
        }
        while(data[ub]>pivot){
            ub--;
        }
        if(lb<ub){
            temp = data[lb];
            data[lb]=data[ub];
            data[ub]=temp;
        }
    }
    temp = data[begin];
    data[begin] = data[ub];
    data[ub] = temp;
    return ub;
}

void printArray(int* data,int length){
	for (int var = 0; var < length; ++var) {
		cout<<data[var]<<" ";
	}
}

int main(){
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int data[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    cout<<"\n  DATA : ";
    for(int i=0;i<n;i++)
    {
        cout<<data[i]<<" ";
    }
	int length = sizeof(data)/sizeof(data[0]);
    quickSort(data,0,length-1);
    cout<<"\nSorted List : ";
    printArray(data,length);

    return 0;
}