#include<stdio.h>
int main(){
   int arr[5];
   printf("Enter the element of array: \n ");
   for (int i=0;i<5;i++){
    
   scanf("%d",&arr[i]);

   }
   printf("Element of array : ");
   for (int i=0;i<5;i++){
    printf("%d  ",arr[i]);

   }
return 0;
}