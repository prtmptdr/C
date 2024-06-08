#include<stdio.h>
int a,b,c;
int main(){
    printf("pls enter 1 for greater num out of 3\n 2 for smaller num out of 3\n  ");

    int choice;
    scanf("%d",&choice);
        switch(choice){
        case 1:
        printf("enter 3 num\n");
        scanf("%d%d%d",&a,&b,&c);
        if (a>b && a>c){
            printf("out of %d and %d greater num=%d",a,b,c,a);
        }
else if (b>a && b>c){
    printf("out of %d and %d greater num=%d",a,b,c,b);
    }
    else{
         printf("out of %d and %d greater num=%d",a,b,c,c);   
    }
    break;
    default:
    printf("sorry no such option available");
 }



}