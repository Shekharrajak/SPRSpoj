/*
#include<cstdio>
#include<iostream>
#include<cstring>
int min(int a,int b)
{
    if(a>b)
        return b;
    else
        return a;
}
int main()
{
    int t,len1,len2,i,j,m,temp1,temp2;
    char str1[2100];
    char str2[2100];
    static int a[20001][2001];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str1);
        scanf("%s",str2);
        len1=strlen(str1);
        len2=strlen(str2);
        for(i=0;i<=len1;i++)
            a[i][0]=i;
        for(i=1;i<=len2;i++)
            a[0][i]=i;
        for(i=1;i<=len1;i++)
        {
            for(j=1;j<=len2;j++)
            {
                m=(str1[i-1]==str2[j-1]) ? 0:1;
                temp1=min(a[i-1][j]+1,a[i][j-1]+1);
              temp2=a[i-1][j-1]+m;
              a[i][j]=min(temp1,temp2);
            }
        }
        printf("%d\n",a[len1][len2]);
    }
    return 0;
}

*/
#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int min(int a,int b,int c){
	if(a<b && a<c){
		return a;
	}
	else if(b<c&&b<a){
		return b;
	}
	else{
		return c;
	}
}
int main(int argc, char** argv) {
	char s[2100],t[2100];
	
	int n;
	scanf("%d",&n);
	while(n--){
	//gets(s);
	//gets(s);
	//gets(t);
	scanf("%s",&s);
	scanf("%s",&t);
	
	int m=strlen(s);
	int n=strlen(t);
	
	int d[m][n];
	for(int i=1;i<=m;i++){
		d[i][0]=i;
	}
	for(int i=1;i<=n;i++){
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
					d[i-1][j-1]+1
				);
			}
		}
	}
	printf("%d",d[m][n]);
	
	}
	return 0;
}

