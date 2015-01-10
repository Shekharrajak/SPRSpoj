#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t!=-1)
    {
        int ret=0,temp,sum=0,a[t],i;
        for(i=0;i<t;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }

        temp=sum/t;
        if(temp*t==sum)
        {
            for(i=0;i<t;i++)
             {
                 if(temp>a[i])
                    ret+=temp-a[i];
            }
            printf("%d\n",ret);
        }
        else
            printf("-1\n");
        scanf("%d",&t);
    }
    return 0;
}
