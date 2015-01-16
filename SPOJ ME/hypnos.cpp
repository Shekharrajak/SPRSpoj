/*
Done by shekhar date : 16/1/15 
hypnos spoj problem
*/
#include <iostream>
#include<cstdio>
#include<map>
using namespace std;
map<long long int ,long long int> hpy;

int hpynos(long long int n,int count){
	long long int sum=0;
	if(hpy.count(n)){
		return -1;
	}
	else if(n==1){
		return count;
	}
	else{
		int k=n;
		while(k){
			sum+=(k%10)*(k%10);
			k/=10;
		}
		count++;
		hpy[n]=hpynos(sum,count);
	}
}
int main(int argc, char** argv) {
	
	while(true){
		long long int n;
		scanf("%lld",&n);
		int k=hpynos(n,0);
		printf("%d\n",k);
	}
	return 0;
}

/*

#include<stdio.h>
int dissect(int num)
{
    int ans=0;
    while(num)
    {
        int t=num%10;
        ans+=t*t;
        num/=10;
    }
    return ans;
}
int main()
{
    int num,count=0,hit=1;
    int arr[1000]={0};
    scanf("%d",&num);
    while(1)
    {
        int temp;
        temp=dissect(num);
        if(arr[temp]==0)
        {
            num=temp;
            arr[temp]=1;
            count++;
        }
        else{
            hit=0;
            break;}
        if(num==1)
            break;
    }
    if(hit)
        printf("%d\n",count);
    else
        printf("-1\n");
    return 0;
}


*/
