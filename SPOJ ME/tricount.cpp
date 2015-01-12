/*
#include<iostream>
using namespace std;

int main(){
    long long T,N;
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>N;
        long long i2=N/2,s,S;
        if(N%2==0) s=i2*(i2+1)*(4*i2-1)/6;
        else s=i2*(i2+1)*(4*i2+5)/6;
        S=s+N*(N+1)*(N+2)/6;
        cout<<S<<endl;
    }
    return 0;
}
*/


#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        unsigned long long n;
        scanf("%llu",&n);
        unsigned long long ans;
        ans=(n*(n+2)*(2*n+1)/8);
        printf("%llu\n",ans);
    }
}


