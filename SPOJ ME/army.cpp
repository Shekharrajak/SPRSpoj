#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
/* run this pro
gram using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	scanf("%d",&n);
	while(n--){
		int a,b;
		scanf("%d%d",&a,&b);
		int i,m1,m2,gd[a],mgd[b];
		for( i =0;i<a;i++){
			scanf("%d", &gd[i]);
		}
		m1=i-1;
		
		for( i=0;i<b;i++){
			scanf("%d",&mgd[i]);
		}
		m2=i-1;
		sort(gd,gd+a);
		sort(gd,gd+b);
		if(gd[m1]>=mgd[m2]){
			printf("Godzilla\n");
		}
		else{
			printf("MechaGodzilla");
		}
	}
	return 0;
}

/*


#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int g,mg;
        scanf("%d%d",&g,&mg);
        int i,god[g],mech[mg];
        for(i=0;i<g;i++)
            scanf("%d",&god[i]);
        for(i=0;i<mg;i++)
             scanf("%d",&mech[i]);
        sort(god,god+g);
        sort(mech,mech+mg);
        if(god[g-1]>=mech[mg-1])
            printf("Godzilla\n");
        else
            printf("MechaGodzilla\n");
    }
}

*/
