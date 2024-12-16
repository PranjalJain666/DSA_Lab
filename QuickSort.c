#include<stdio.h>

void printarray(int* A, int n){
for(int i=0; i<n; i++){
    printf("%d ", A[i]);
}
printf("\n");
}

int partition(int A[], int low, int high){
    int pivot=A[low];
  int  i=low+1;
   int j=high;
    int temp; 
    do{
        while(A[i]<=pivot){           // finding element>pivot
            i++;}
        while(A[j]>pivot){            // finding element<=pivot
            j--;}
        if(i<j){                    
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
        }  
    }while(i<j);
    temp=A[low];
    A[low]=A[j];
    A[j]=temp;
    return j;
}

void QuickSort(int *A, int low, int high,int n){
    int partitionIndex;
if(low<high){
    partitionIndex=partition(A, low, high);
    printarray(A, n);
    QuickSort(A, low, partitionIndex-1, n);
    QuickSort(A, partitionIndex+1, high, n);
}
}

int main(){
     int A[]={2, 4, 3, 9, 1, 4, 8, 7, 5, 6};
    int n=10;
    printarray(A, n);
    QuickSort(A, 0, n-1, n);
    printarray(A, n);
return 0;
}