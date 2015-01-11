#include<iostream>
#include<stdlib.h>
using namespace std;
#define ull unsigned long long
int main()
{
 ull t;
 cin>>t;
 while(t--){
  ull i,y=192,n;
  cin>>n;
  for(i=1;i<n;i++){
   y+=250;
  }
  cout<<y<<endl;
 }
 return 0;
}

/*

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long num;
        scanf("%lld",&num);
        long long ans;
        ans=192+(num-1)*250;
        printf("%lld\n",ans);
    }
    return 0;
}
*/
