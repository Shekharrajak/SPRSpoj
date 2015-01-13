#include <iostream>
#include<cstdio>
int main(int argc, char** argv) {
	int n;
	scanf("%d",&n);
	double pie=3.141592653589793238462643383279;//every thing is matter dude...accuracy
	while(n){
	//	double r =n/3.14;
		printf("%.2f\n",(n*n)/(2*pie));//3.14*r*r/2
		scanf("%d",&n);
	}
	return 0;
}
/*

#include<stdio.h>
int main()
{
        double a;
        double pie=3.141592653589793238462643383279;
        scanf("%lf",&a);
        while(a!=0)
        {
        double r=a/pie;
        double area=pie*r*r/2.0;
        printf("%.2lf\n",area);
        scanf("%lf",&a);
        }
        return 0;
}
*/

//or use this atan
/*

int main(){
	double pi = 4*atan(1.0);
	int x;
	while (scanf("%d",&x)&&x!=0){
		printf("%.2lf\n",(double)(x*x)/2/pi);
	}

}
*/
