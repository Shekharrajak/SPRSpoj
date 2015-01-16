#include <iostream>
#include<cstdio>
#include<map>
using namespace std;
map<int,int> cards;
int level(int n, int clevel){
		if(n==0){
		return (  cards[n] +3 -(clevel+1)) ;
	}
	
	else if(cards.count(n)){
			return cards[n];
		}
		else{
			

			cards[n]=3 + level(n-1,++clevel);
			
		}
	
}
int main(int argc, char** argv) {
	int n;
	scanf("%d",&n);
	while(n--){
		int k;
		scanf("%d",&k);
		printf("%d\n",level(k,0));
	}
	return 0;
}
