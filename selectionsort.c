#include<stdio.h>

void printArray(int* A, int n){
    for(int i=0; i<n; i++)
    {
        printf("%d", A[i]);
    }
    printf("\n");

}

void selectionSort(int *A, int n){
    int indexofMin,temp;
    printf("Runnig selection sort...\n");
    for (int i = 0; i < n-1; i++)
    {
        indexofMin = i;
        for (int j = i+1; j < n; i++)
        {
          if (A[j] < A[indexofMin])
          {
            indexofMin = j;
          }
            
        }
        //Swapping
        temp = A[i];
        A[i] = A[indexofMin];
        A[indexofMin] = temp;
    }
    


}

int main(){
    int A[] = {3 ,5, 2, 8};
    int n = 4;
    printArray(A, n);
    selectionSort(A,n);
    printArray(A,n);

 

   return 0;
}


