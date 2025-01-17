#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

void printarray(int* A, int n){
for(int i=0; i<n; i++){
    printf("%d ", A[i]);
}
printf("\n");
}

int maximum(int A[], int n){
    int max= INT_MIN;
    for(int i=0; i<n; i++){
        if(max < A[i]){
            max=A[i];
        }
    }
}
void countSort(int *A, int n){
    int i,j;
    // find the maximum element in A
    int max=maximum(A, n);
    // create the count array
    int* count=(int *)malloc((max+1)*sizeof(int));

    // initialize the array elements to zero
    for(int i=0; i<max+1; i++){
        count[i]=0;
    }

    // increment the index in count array
     for(int i=0; i<n; i++){
        count[A[i]]=count[A[i]]+1;
    }

    i=0; // counter for count array
    j=0; // counter for given array A

    while(i<=max){
        if(count[i]>0){
            A[j]=i;
            count[i]=count[i]-1;
            j++;
        }
        else{
            i++;
        }
    }
}

int main(){
    int A[]={9,5,4,8,7,1,6};
    int n=7;
    printarray(A, n);
    countSort(A,n);
    printarray(A, n);
return 0;
}