#include <stdio.h>
// void preincrement (int x);
// void main(){
// int a=10;
// preincrement(a);

// }

// void preincrement(int x){
// x++;
// printf("%d",x);

// }
// int modulus();
// int modulus(){
// int x=60;
// int y=50;
// int z=x%y;
// return z;

// }

// void main(){
//  int k= modulus();
//  printf("%d",k);

// }
// int equality(int x, int y);
// int equality(int x, int y){

// int z=x==y;
// return z;

// }
// void main(){
// int k=equality(100,100);
// printf("%d",k);
// }
// void division(int x,int y);
// void division(int x,int y){
// int z=x/y;
// printf("%d",z);
// }
// void main(){
// printf("pls enter two num\n");
// int a,b;
// scanf("%d%d",&a,&b);
// division(a,b);
// }
// void preincrement(){
//     printf("enter a number\n");
//     int x;
//     scanf("%d",&x);
//      x++;
//     printf("%d",x);
// }
// void main(){
//     preincrement();

// }
// void notequal(int x, int y){

// int z=x!=y;
// printf("%d",z);
// }
// void main(){
//     printf("enter two num\n");
//     int x,y;
//      scanf("%d%d",&x,&y);

//     notequal(x,y);
// }
// void add(){
// int x,y;

// printf("pls enter two num\n");
// scanf("%d%d",&x,&y);
// int z=x+y;
// printf("%d",z);
// }
// void main(){
// add();

// }
// void greater(int a,int b){
// int x,y;
// printf("pls enter two num\n");
// scanf("%d%d",&x,&y);
// int z=x>y;
// printf("%d",z);

// }
// void main(){
//     int a,b;
// greater(a,b);
// }
// int ternary(){
// int x,y;
// printf("pls enter two num\n");
// scanf("%d%d",&x,&y);
// int z=x>y?x:y;
// return z;
// }
// void main(){
// int k=ternary();
// printf("%d",k);
// }
// int compound_assign(int a){
//     a*=25;
//     return a;

// }
// void main(){
// printf("pls. enter a number\n");
// int k;
// scanf("%d",&k);
// int h=compound_assign(k);
// printf("%d",h);

// }
// float table(float num){
// return num;
// }
// void main(){
// printf ("pls enter a num\n");
// float x;
// scanf("%f",&x);
// float k=table (x);
// int i=1;
// while (i <= 10){
// printf("%0.2f * %d = %0.2f\n",k,i,k*i);
// i++;
// }

// }
// double test(double a,double b){
//     int c=a>b?a:b;
//     double p=c;
//     return p;
// }
// void main(){
// printf("pls enter two num\n");
// double x,y;
// scanf("%lf%lf",&x,&y);
// double k=test(x,y);
// printf("%lf",k);
// }
// int greater(int a, int b, int c)
// {
//     if (a > b && a > c)
//     {
//         return a;
//     }
//     else if (b > a && b > c)
//     {
//         return b;
//     }
//     else
//     {
//         return c;
//     }
// }
// void main(){
// printf("enter 3 numbers\n");
// int a;int b;int c;
// scanf("%d%d%d",&a,&b,&c);
// int result=greater(a,b,c);
// printf("out of %d and %d and %d the greater num is %d\n",a,b,c,result);
// }
// void name(char a,char b,char c,char d,char e, char f){

// printf("%c%c%c%c%c%c",a,b,c,d,e,f);


// }
// void main(){
// printf("pls enter 6 char\n");
// char a,b,c,d,e,f;
// scanf(" %c %c %c %c %c %c",&a,&b,&c,&d,&e,&f);
// name(a,b,c,d,e,f);


// }
int lowest(int a,int b){
if(a<b){
return a;
}
else{
return b;
}
}
int cube(){
printf("pls enter two num\n");
int x,y;
scanf("%d%d",&x,&y);
int result = lowest(x,y);
printf("out of %d and %d the lowest num is %d\n",x,y,result);
int CUBE=result*result*result;
return CUBE;
}
void main(){
int k=cube();
printf("the cube of lowest no. is %d",k);
}