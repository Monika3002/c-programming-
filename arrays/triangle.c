#include<stdio.h>
int main(){

    int a,b,c,angle;
    printf("Given angles are : ");
    scanf("%d%d%d",&a,&b,&c);
    angle=a+b+c;
    if(angle==180){
        printf("These are the angles of triangle");
    }
    else{
        printf("These are not the angles of triangle");

    }

    return 0;


}