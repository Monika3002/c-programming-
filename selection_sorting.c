#include<stdio.h>
#define MAX_SIZE 100
int main(){
    int temp,i,j,n,arr[MAX_SIZE];
    printf("Enter the size of array :");
    scanf("%d",&n);

    printf("Enter the element in array \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        int pos=i;
        for(j=i+1;j<n;j++){
             if(arr[pos]>arr[j]){
                pos=j;
            }
        }
        if(pos!=i){
            temp=arr[i];
            arr[i]=arr[pos];  
            arr[pos]=temp;
         }
        
    }
    printf("ELemnet of array after sorting\n");
    for(i=0;i<n;i++){
        printf("%d   ",arr[i]);
    }
return 0;
}