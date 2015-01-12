#include <iostream>
#include<vector>
#include<cstdio>
using namespace std;
int main(int argc, char** argv) {
	vector<int>vec;
	int n;
	scanf("%d",&n);
	while(n){
		for(int i=1;i<=n;i++){
			scanf("%d",&vec[i]);
		}
		bool flag =true;
		for(int i=1;i<=n;i++){
			if(vec[vec[i]]!=i)
					{
						flag =false;
						break;
					}
	
		}
		if(flag){
			printf("ambiguous\n");
		}
		else{
			printf("not ambiguous\n");
		}
		scanf("%d",&n);
	}
		return 0;
}

/*
#include<iostream>
using namespace std;

int main(){
    int N,flag;
    int A[100001] ;
    while(cin>>N){
        if(N==0) return 0;
        for(int i=1;i<=N;i++) cin>>A[i];
        flag=1;
        for(int i=1;i<=N;i++){
            if(A[A[i]]!=i){ flag=0; break;}
        }
        if(flag) cout<<"ambiguous"<<endl;
        else cout<<"not ambiguous"<<endl;
    }
}

*/
