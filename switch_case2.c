#include<stdio.h>
int a,b,c,d,average, sum_of_cube;
void main(){
printf("enter ur choice \n");
int choice;
scanf("%d",&choice);
switch(choice){

case 1:
printf("enter 3 nos for average\n");
scanf("%d%d%d",&a,&b,&c);
average=(a+b+c)/3;
printf("the average = %d",average);
break;
case 2:
printf("enter 3 nos for sum of cubes\n");
scanf("%d%d%d",&a,&b,&c);
sum_of_cube = a*a*a+b*b*b+c*c*c;
printf("the sum of cube = %d",sum_of_cube);
break;
default:
printf("sorry no such option avaialble");



}





}