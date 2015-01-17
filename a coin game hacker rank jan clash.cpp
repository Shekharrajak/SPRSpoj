#include <iostream>
#include<cstdio>
int main(int argc, char** argv) {
	
	int t;
	scanf("%d",&t);
	
	while(t--){
		
		int a,b;
		scanf("%d%d",&a,&b);
		if(a==b){
			printf("Play\n");
			
		}	
		else if((a==0 && b!=0 ) || (b==0 && a!=0)){
			printf("Play\n");
		}
		else {
			printf("Don't play\n");
		}
	}
	return 0;
}
