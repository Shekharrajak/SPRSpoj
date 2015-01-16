//not working
#include <iostream>
#include<cstdio>
#include<map>
using namespace std;
map<int,int> cards;


int level(int n, int clevel){
	
	if(k!=clevel-1){
		return (3*clevel) ;
		
		
		}
		else if(k==clevel-1){
			return (-clevel);
		}	
	else  if(cards.count(n)){
			return cards[n];
		}
		
		
		else{
			
			
			cards[n]=3*(clevel) + level(n-1,n,++clevel);
		
	
		}
		else if(n==0){
			return cards[k];
		}
			
		
	
}
int main(int argc, char** argv) {
	int n;
	scanf("%d",&n);
	while(n--){
		int k;
		scanf("%d",&k);
		printf("%d\n",level(k,k));
	}
	return 0;
}
