#include<stdio.h>
int main(){
int x,y,z,great;
printf("enter three numbers:  ");
scanf("%f%f%f",&x,&y,&z);
great=x;
if(y>x)
{
    great=y;

}
 if(z>x)
{  
    great=z;
}

printf("%f",great);

return 0;


}