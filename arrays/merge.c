#include<stdio.h>
int main()
{   
    int m,n,i,j,k,resultsize;
    printf("Enter the size of first array and second array : \n");
    scanf("%d  %d",&m,&n);
    printf("Enter the element in first array :\n");
    resultsize=m+n;
    int arr1[m],arr2[n],arr3[resultsize];
    for(int x=0;x<m;x++)
    {
        scanf("%d",&arr1[x]);
    }
    printf("Enter the element in second array :\n");
    for(int x=0;x<n;x++)
    {
        scanf("%d",&arr2[x]);
    }

    for(i=0;i<m;i++){
        arr3[i]=arr1[i];
    }
    for(i=0,j=m;i<n && j<resultsize; i++,j++)
    {
        arr3[j]=arr2[i];
    }

    printf("The new array after merging is : ");
    for(k=0;k<resultsize;k++)
    {
        printf("%d ",arr3[k]);
    }
    
    return 0;
}