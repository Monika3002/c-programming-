#include<stdio.h>
void insertion(int arr[],int n){
    for(int i=1;i<n;i++){

       int temp=arr[i];
       int j=i-1;
        for(;j>=0;j--){
          if(arr[j]>temp){
             arr[j+1]=arr[j];
            }
          else{
                 break;
            }
        }
        arr[j+1]=temp;
    }

}
int main(){
     int n=5;
     int arr[5]={1,3,2,8,0};
     insertion(arr,5);
     for(int i=0;i<n;i++){
     printf("%d ",arr[i]);
     }


    return 0;
}