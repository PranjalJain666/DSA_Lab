#include<stdio.h>

void printarray(int* A, int n){
for(int i=0; i<n; i++){
    printf("%d ", A[i]);
}
printf("\n");
}

void insertonSort(int *A, int n){
   int key, j;
   //loop for passes
   for(int i=0; i<n; i++){
   key=A[i];
   j=i-1;
   // loop for each pass
   while(j>=0 && A[j]>key){
    A[j+1]=A[j];
    j--;
   } A[j+1]=key;
   }
}

int main(){
     int A[]={12, 54, 65, 7, 23, 9};
     int n=6;
     printarray(A, n);
     insertonSort(A, n);
     printarray(A, n);
}