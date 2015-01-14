#include <iostream>
#include<cstdio>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	scanf("%d",&n);
	while(n--){
		float r;int i=1;
		scanf("%f",&r);
		printf("Case %d: %.2f\n",i++ ,(0.25+4*r*r));
	}
	return 0;
}
