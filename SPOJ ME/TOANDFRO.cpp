#include <iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main(int argc, char** argv) {
	int n;
	char a[200];
	scanf("%d",&n);
	
	scanf("%s",&a);
	while(n){
	
	int k=0;int arr[200];
	int len=strlen(a)/n;
	for( int i=0;i<len;i++){
		if(i%2==0){
			for(int j=0;j<n;j++)
				arr[k++] =a[j];
		}
		else{
			for(int j=n-1;j>=0;j--){
				arr[k++]=a[j];
			}
		}
	}
	for(int i=0;i<strlen(a);i++){
		
			printf("%c",a[i]);
	}
	printf("\n");
        scanf("%d",&a);
}
	return 0;
}
