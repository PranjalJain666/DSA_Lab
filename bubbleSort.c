#include<stdio.h>

void printarray(int* A, int n){
for(int i=0; i<n; i++){
    printf("%d ", A[i]);
}
printf("\n");
}

void bubblesort(int *A, int n){
    int temp;
    int isSorted=0;
    for(int i=0; i<n-1; i++){                 //for number of pass
        printf("working on pass number %d \n", i+1);
        isSorted=1;
        for(int j=0; j<n-1-i; j++){              // for comparison in each pass
             if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                isSorted=0;
             } }
               if(isSorted){
                return;
               }
                 }}

int main(){
    int A[]={12, 54, 65, 7, 23, 9};
    int B[]={1, 2, 3, 4, 5, 6};
    int n=6;
    printarray(A, n); // before sort
    bubblesort(A, n);
    printarray(A, n);  // after sort
    bubblesort(B, n);
    printarray(B, n);
}