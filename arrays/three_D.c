#include<stdio.h>
int main(){
    // initialisation of 3D array
    int arr[2][3][4];
    printf("Enter the element in array : \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<4;k++)
            {
              scanf("%d ",&arr[i][j][k]);
            }
        }
    }
    printf("The 3-D array is \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<4;k++)
            {
              printf("%d ",arr[i][j][k]);
                // printf("Element in arr[%d][%d][%d]: %d\n",i,j,k,arr[i][j][k]);
            }
            printf("            ");
        }   
        printf("\n");
    }  

    return 0;
}