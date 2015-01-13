#include <iostream>
#include<cstdio>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int b,g;
	scanf("%d%d",&g,&b);
	while(g!=-1 && b!=-1){
		int max = g>b ? g:b ;
		int min = g<b ?g :b ;
		int r = max/(min+1) + (max%(min+1) > 0);
		printf("%d\n",r);
		scanf("%d%d",&g,&b);
	}
	return 0;
}
