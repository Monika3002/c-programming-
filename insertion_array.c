#include<stdio.h>
int main(){
    int n=6;
    int arr[20]={1,4,5,6,7,8,};
    
    for (int i=0;i<n ;i++){
    scanf("%d ",arr[i]); 
    }
    printf("Element before insertion: \n");
    for (int i=0;i<n ;i++){
        printf("%d  ",arr[i]);
    }

   int pos=4;
    n++;
    for(int i=n-1;i>=pos;i--)
    {
        arr[i]=arr[i-1];

    }
    arr[pos]=2;
    printf("\nElement after insertion: \n");
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
return 0;
} 
