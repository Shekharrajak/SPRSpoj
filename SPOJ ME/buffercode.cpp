# include <stdio.h>
int main(){
static int i=2;
i--;
static int c=main();
if(i==0)return c;
printf("ssd");
printf("\n%d",main());
}
