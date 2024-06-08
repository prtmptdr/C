#include<stdio.h>
void main(){
printf("%50s\n","DL ELIGIBILITY FOAM");
printf("%52s","______________________\n");
int age,qual,fee;
printf("enter age\n");
scanf("%d",&age);
if (age>=18){
printf("enter qual\n");
scanf("%d",&qual);
if(qual>=10){
  printf("enter fee paid\n");
  scanf("%d",&fee);
  if (fee>=1500){
    printf("congrats");
  }
   else{
    printf("paisa or kamao\n");
   }
  }
   else {
    printf("anpad kahi ka\n");
   } 
 }
else {
    printf("aap chote ho\n");
}
}





