#include <iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main(int argc, char** argv) {
	int n;
	char a[200];
	scanf("%d",&n);
	
	
	while(n){
	scanf("%s",&a);
	int k=0;char arr[200][100];
	int len=strlen(a)/n;
	for( int i=0;i<len;i++){
		if(i%2==0){
			for(int j=0;j<n;j++)
				arr[i][j] =a[k++];
		}
		else{
			for(int j=n-1;j>=0;j--){
				arr[i][j]=a[k++];
			}
		}
	}
	for(int i=0;i<len;i++){
		for(int j=0;j<n;j++)
			printf("%c",arr[i][j]);
	}
	printf("\n");
        scanf("%d",&n);
}
	return 0;
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t)
    {
        char arr[300];
        scanf("%s",arr);
        int len=strlen(arr)/t;
        char ans[len][t];
        int i,j,k=0;
        for(i=0;i<len;i++)
        {
            if(i%2)
            {
                for(j=t-1;j>=0;j--)
                   ans[i][j]=arr[k++];
            }
            else{
            for(j=0;j<t;j++)
            {
                ans[i][j]=arr[k++];
            }}
        }
        for(i=0;i<t;i++)
        {
            for(j=0;j<len;j++)
                printf("%c",ans[j][i]);
        }
        printf("\n");
        scanf("%d",&t);
    }
    return 0;
}

*/
