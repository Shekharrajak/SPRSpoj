#include <iostream>
#include<cstdio>

double f(float a,float c){
	float ab = ((3*(a/10)) > (a-(a/250)*c) ? (3*(a/10)) :(a-(a/250)*c));
	return ab;
	}
int main(int argc, char** argv) {
	float a,b,c,d;
	scanf("%f%f%f%f",&a,&b,&c,&d);
	if( f(a,c) > f(b,d)) {
		
	 printf("Misha");
	 }
	 else if (f(a,c) < f(b,d)) {
	 printf (  "Vasya" );
	}
	else if(f(a,c) == f(b,d)) {
		printf("Tie");
	}
//	printf("%f",f(a,c));
	
	return 0;
}
