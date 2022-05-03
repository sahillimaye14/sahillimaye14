#include<stdio.h>

void merge_sort(int i,int j,int a[],int aux[]){
    if (i<j)
    {
        return;
    }
    int mid = (i+j)/2;

    merge_sort(i,mid,a,aux);//sort left subarray
    merge_sort(mid+1,j,a,aux);//Right subarray

    int pointer_left = i;//for Left array
    int pointer_right = mid+1;//for right array
    int k;

    //we loop from i to j to fill each element of final merged array
    for ( k = i; k <= j; k++)
    {
        if (pointer_left == mid+1)
        {
            aux[k] = a[pointer_right];
            pointer_right++;
        }
        else if (pointer_right== j+1)
        {
            aux[k] = a[pointer_left];
            pointer_left++;
        }
        else if (a[pointer_left] < a[pointer_right])
        {
            aux[k] = a[pointer_left];
            pointer_left++;
        }
        else{
            aux[k] = a[pointer_right];
            pointer_right++;
        }
        
        
        
    }
    

}


int main(){
    int a[100], aux[100],n,i,d,swap;

    printf("Enter the no. in array: \n");
    scanf("%d",&n);
    
    printf("Enter %d integers\n",n);

    for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

    merge_sort(0,n-1,a,aux);

    printf("Printing sorting array: \n");

    for ( i = 0; i < n; i++)
    printf("%d\n",a[i]);
    
    return 0;
}
