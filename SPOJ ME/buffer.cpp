#include<stdio.h>
typedef struct{
char *name;
double salary;
}job;
int  main(){
static job a={"TCS",15000.0};
static job b={"IBM",25000.0};
static job c={"Google",35000.0};
int x=5;
job * arr[3]={&a,&b,&c};
printf("%s %f\t",(3,x>>5-4)[*arr]);
}
double myfun(double d){
d-=1;
return d;
}

