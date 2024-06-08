#include<stdio.h>
void main(){
printf("enter a num (float)for a table\n");
float num;
scanf("%f",&num);
int i=1;
do{
    printf("%f*%d =%f\n",num,i,num*i);
    i++;
}
while(i<=10);
}