
#include<cstdio>
#include<math.h>

int main()
{
int n;
scanf("%d",&n);
int j,i;
int count=0;
for(i=1;i<=sqrt(n);i++)
{
for(j=i;i*j<=n;j++)
{
count++; 
}

}
printf("%d\n",count);


return 0;
}
//genaralize for the n=1,2,...9 and you will feel the procedure : actual procedure is this -
/*
#include<cstdio>
#include<cmath>

int main()
{
    int i,j,n,cnt=0;
    scanf("%d",&n);

    //    counting no. of rectangles
    for(i=1;i<=sqrt(n);i++)
        for(j=i+1;i*j<=n;j++)
            cnt++;

    //    counting no. of squares ,
    cnt+=sqrt(n);
    printf("%d",cnt);
    return 0;
}


*/
