#include<iostream>
#include<cstdio>
#include<map>
const int BASE = 11;
using namespace std;
map<long long,long long> dpMap; // long long for the Constraint N <= 10^10 (Values will overflow in int datatype)
long long coins(long long num)
{
    if(dpMap.count(num))
        return dpMap[num];
    else
    {
        dpMap[num]=coins(num/2)+coins(num/3)+coins(num/4);
        return dpMap[num];
    }
 
}
int main()
{
    long long num,ans;
 
    for(int i=0;i<=BASE;i++)
        dpMap[i]=i;
 
    while(scanf("%lld",&num) != EOF)  //Reading Input till End of File!
    {
        ans=coins(num);
        printf("%lld\n",ans);
    }
    return 0;
}
