#include <stdio.h>
int mergecode(int a[],int b[], int m,int n)
{
   int resultsize=n+m;
   int c[resultsize];
   int i,j,k;
   for(i=0;i<m;i++){
    c[i]=a[i];
   }
   for(i=0,j=m;j<resultsize && i<n;i++,j++){
    c[j]=b[i];
   }

   for(k=0;k<resultsize;k++)
   {
    printf("%d ",c[k]);
   }
   return 0;
}
int main()
{
    int a[5]={1,2,3,4,5};
    int b[4]={6,7,8,9};
    printf("%d ",mergecode(a,b,5,4));
    return 0;
}