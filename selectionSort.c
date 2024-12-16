#include<stdio.h>

void printarray(int* A, int n){
for(int i=0; i<n; i++){
    printf("%d ", A[i]);
}
printf("\n");
}

void selectionSort(int *A, int n){
    printf("after selection sort.......\n");
     int minIndex;
     int temp;
     for(int i=0; i<n-1; i++){
        minIndex=i;
        for(int j=i+1; j<n; j++){
            if(A[j] < A[minIndex]){
                minIndex=j;
            }
        }
        temp=A[i];                //swap code
        A[i]=A[minIndex];
        A[minIndex]=temp;
     }
}

int main(){
    int A[]={3, 5, 2, 13, 12};
    int n=5;
    printarray(A, n);
    selectionSort(A, n);
    printarray(A, n);
    return 0;
}