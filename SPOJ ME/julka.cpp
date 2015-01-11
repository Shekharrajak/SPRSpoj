#include <iostream>
#include<cstdio>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	scanf("%d",&n);
	int add;
	scanf("%d",&add);
	
	int temp=n-add;
	temp/=2;
	printf("%d\n%d",temp+add,temp);
	
	return 0;
}
