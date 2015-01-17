#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(int argc, char** argv) {
	char s[20001],t[20001];
	gets(s);
	gets(t);
	
	int m=((string)s).length();
	int n=((string)t).length();
	
	int d[m][n];
	for(int i=1;i<=m;i++){
		d[i][0]=i;
	}
	for(int i=1;i<n;i++){
		d[0][i]=i;
	}
	
	for(int j=1;j<=n;j++){
		for(int i=1;i<=m;i++){
			if(s[i]==t[j]){
				d[i][j]=d[i-1][j-1];
			}
			else{
				d[i][j]=min
				(
					d[i-1][j]+1,
					d[i][j-1]+1,
					d[i-1][j-1]
				);
			}
		}
	}
	printf("%d",d[m][n]);
	return 0;
}
