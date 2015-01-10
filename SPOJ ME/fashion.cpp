#include <iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(int argc, char** argv) {
	int n;
	scanf("%d",&n);
	int *a,*b;
	while(n--){
		int t,k=0;
		scanf("%d",&t);
		a=new int(t);
		b=new int (t);
		for(int i=0;i<t;i++){
			scanf("%d",&a[i]);
		}
		for(int i=0;i<t;i++){
			scanf("%d",&b[i]);
		}
		int sum=0;
		sort(a,a+t);
		sort(b,b+t);
		for(int i=0;i<t;i++){
			sum+=a[i]*b[i];
		}
		printf("%d\n",sum);
	}
	return 0;
}

/*

#include<stdio.h>
#include<algorithm>    //for using sort function
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,ppl;
        scanf("%d",&ppl);
        int men[ppl],women[ppl];
        for(i=0;i<ppl;i++)
            scanf("%d",&men[i]);
        for(i=0;i<ppl;i++)
            scanf("%d",&women[i]);
        sort(men,men+ppl);  //sorts array 'men' from zeroth to ppl-1 th index
        sort(women,women+ppl);
        long long ans=0;
        for(i=0;i<ppl;i++)
            ans+=men[i]*women[i]; //hotness maximised
        printf("%d\n",ans);
    }
    return 0;
}

*/

