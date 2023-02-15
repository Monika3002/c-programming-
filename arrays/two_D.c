#include<stdio.h>
int main(){
    // initialisation of 2D array
    int arr[2][3];
    printf("Enter the element in array : \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++)
        {
            scanf("%d ",&arr[i][j]);
        }
    }
    printf("The 2-D array is \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++)
        {
            printf("Element in arr[%d][%d] : %d\n",i,j,arr[i][j]);
        }
    }

    return 0;
}