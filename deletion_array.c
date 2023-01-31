#include<stdio.h>
#define MAX_SIZE 100
int main(){
    int i,n,pos, arr[MAX_SIZE];
    printf("Enter the size of array : ");
    scanf("%d",&n);

    printf("Enter the element in the array \n");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the position of element in array to delete : ");
    scanf("%d",&pos);

   for(i=pos-1;i<n;i++){
    arr[i]=arr[i+1];
   }
   printf("Element of array after deletion \n");
    for (i=0;i<n-1;i++){
        printf(" %d",arr[i]);
    }
return 0;
}