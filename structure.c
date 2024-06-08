#include<stdio.h>
#include<string.h>
struct btech {
char name[50];
long long mobile;
char college[50];
char branch[50];
};
void main(){
struct btech pritam;
printf("enter name of pritam\n");
char nm[50];
scanf("%[^\n]",&nm);
getchar();
printf("pls enter mo.nos\n");
scanf("%lld",&pritam.mobile);
getchar();
printf("pls enter college name\n");
char col[50];
scanf("%[^\n]",&col);
getchar();
printf("pls enter branch name\n");
char br[50];
scanf("%[^\n]",&br);
printf("%s\n%lld\n%s\n%s\n",strcpy(pritam.name,nm),pritam.mobile,strcpy(pritam.college,col),strcpy(pritam.branch,br));
}


