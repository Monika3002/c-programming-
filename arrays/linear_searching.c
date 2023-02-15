# include<stdio.h>
#define MAX_SIZE 100
int main(){
    int arr[MAX_SIZE],i,flag=0,key,size;
    printf("Enter the size of array : \n");
    scanf("%d",&size);
    // n=sizeof(arr)/sizeof(arr[0]);
    printf("Enter the elements in array : \n");
    for (i=0;i<size;i++)
    {
        scanf("%d ",&arr[i]);
    }
    printf("Enter the element to be search : \n");
    scanf("%d ",&key);
    for (int i=0;i<size;i++)
    {
        if ( arr[i]==key)
        {
            printf("Element is found. \n");
            flag =1;
        }
    }
        if(flag ==0)
        {
            printf("ELement is not found. \n");
        }
    printf("Linear searching is completed");
        return 0;
}