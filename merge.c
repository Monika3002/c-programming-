#include<stdio.h>
int main()
{
   // printf("hh");
   int n,m;
   int a[m],b[n];
   printf("Enter the size of array a :");
   scanf("%d",&m);
   printf("Enter the element in array a \n");
   for(int i=0;i<m;i++){
    scanf("%d ",&a[i]);
   }
   printf("Enter the size of array a :");
   scanf("%d",&n);
   printf("Enter the element in array a \n");
   for(int i=0;i<n;i++){
    scanf("%d ",&b[i]);
   }

   for(int i=0;i<n;i++){
    a[m+i]=b[i];
   }
   printf("Enter the element in array after merging \n");
   for(int i=0;i<m;i++){
    printf("%d ",a[i]);
   }
   return 0;

}