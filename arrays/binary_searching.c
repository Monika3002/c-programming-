#include<stdio.h>
int output(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
int binarysearching(int arr[],int size,int key){
    int start=0,end=size-1;
    int mid =start+(end-start)/2;

    while(start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;

    }
    return -1;

}
int main(){
    int size=7,key=5;
    int arr[size];
    printf("Enter the element in array \n");
    for(int i=0;i<size;i++){
        scanf("%d ",&arr[i]);
    }
    printf("%d\n", output(arr,size));
    int b=binarysearching(arr,7,5);
    printf("The index of element %d is %d ",key,b);

    return 0;

    
}