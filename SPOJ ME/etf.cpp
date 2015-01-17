#include <iostream>
#include<cstdio>

int phi (int n)
{
   int ans=n;
   for (int i=2; i*i<=n; ++i)
   if(n%i==0)
   {
  while(n%i==0)
      n=n/i;
     ans=ans-ans/i;
   }
   if(n>1)
 ans=ans-ans/n;
 return ans;
}
int main(int argc, char** argv) {
	int t;
	scanf("%d",&t);
	while(t--){
		int a;
		scanf("%d",&a);
		printf("%d\n",phi(a));
	}
	return 0;
}
