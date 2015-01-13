#include <iostream>
#include<cstdio>
int main(int argc, char** argv) {
	int n;
	scanf("%d",&n);
	while(n){
	//	double r =n/3.14;
		printf("%.2f\n",(n*n)/(2*3.14 ));//3.14*r*r/2
		scanf("%d",&n);
	}
	return 0;
}
