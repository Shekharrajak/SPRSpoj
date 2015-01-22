#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(int argc, char** argv) {
	int n;
	scanf("%d",&n);
	while(n--){
		int a,b;
		scanf("%d%d",&a,&b);
		int t[a];
		for(int i=0;i<a;i++){
			scanf("%d",&t[i]);
		}
		sort(t,t+a);
		int min=t[b-1] - t[0];
		
		for(int i=1;i<a-b+1;i++){
			if(min>t[b-1+i] - t[i]){
				min=t[b-1+i]-t[i];
			}
		}
		printf("%d\n",min);
	}
	
	
	return 0;
}
