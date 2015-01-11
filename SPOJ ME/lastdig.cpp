#include <iostream>
#include<cstdio>
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	int t;
	scanf("%d",&t);
	long long n1,n2;
	while(t--){
		scanf("%lld%lld",&n1,&n2);
		//long long r;
		long long d=1;
			
			while(n2){
				if(n2%2 !=0)//it can be 0 or 1
				{
					d=(d*n1)%10;	
				}
				n2 >>=1;
				n1=(n1*n1)%10;
			}
			printf("%lld\n",d);
	}
	
}
/*general method : with any mod
#include<stdio.h>
long long modexpo(long long a,long long b,long long n)
{
    long long d=1;
    while(b)
    {
        if(b%2)
            d=(d*a)%n;
        b>>=1;
        a=(a*a)%n;
    }
    return d;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long a,b;
        scanf("%lld%lld",&a,&b);
        printf("%lld\n",modexpo(a,b,10));
    }
    return 0;
}

*/

/*
int main(int argc, char** argv) {
	
	 int n,p,t;
	long int r;
	scanf("%d",&t);
	while(t--){
	
	scanf("%d",&n);
	scanf("%d",&p);
	r= pow(n,p);
	printf("%d",r%10);
}
	return 0;
}
*/
