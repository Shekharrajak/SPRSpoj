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
		if(m1>m2){
			printf("Godzilla\n");
		}
		else{
			printf("MechaGodzilla");
		}
	}
	return 0;
}
