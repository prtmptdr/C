#include<stdio.h>
// void main(){
//     int x=100;
//     printf("%u\n",&x);
//     int* p;
//     p=&x;
//     printf("%u",p);
// }



// int x=100;
// int* p;
// p=&x;
// *p=2000;
// printf("%d\n%d\n%d",x,p,*p);
// }


// int x=200;
// int *p; p=&x;
// int **q; q=&p;
// int ***r; r=&q;
// int ****s; s=&r;
// ****s=1000;
// printf("%d\n%d\n%d\n%d\n%d",x,p,q,r,s);
// }

// int arr[]={10,20,30};
// if(arr==&arr[0]){
// printf("true");
// }
// }


// int arr[]={10,20,30,40};
// int *p=arr;
// for(int i=0; i<4; i++){
//     printf("%d |",*(p+i));
// }
// }


// void add(int*x , int*y){
//     int z=*x+*y;
//     printf("%d",z);
// }
// void main(){
//     printf("pls enter two nos\n");
//     int a,b;
//     scanf("%d%d",&a,&b);
//     add(&a,&b);
// }


// int* add(){
// int x,y;
// printf("pls enter two nos\n");
// scanf("%d%d",&x,&y);
// int z=x+y;
// int *p=&z;
// return p;
// }
// void main(){
//    int *k=add();
//    printf("%d",*k);
// }


// int* add(int* x,int*y){
//    int z=*x +*y;
//    int *k=&z;
//    return k; 
// }
//  void main(){
//    printf("enter 2 nos pls\n");
//    int a,b;
//    scanf("%d%d",&a,&b);
//    int *k=add(&a,&b);
//    printf("%d",*k);
// }


int* modulus(){
    int x,y;
    printf("pls enter 2 nos\n");
    scanf("%d%d",&x,&y);
    int z=x%y;
    int *p=&z;
    return p;
}
void main(){
    int *k=modulus();
    printf("%d",*k);
}