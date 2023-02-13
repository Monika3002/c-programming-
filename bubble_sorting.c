#include<stdio.h>
#define MAX_SIZE 100
int main(){
    int i,j,temp,n,arr[MAX_SIZE];
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the element of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }
    printf("Element of array after bubble sorting\n");
    for(i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }

return 0;

}