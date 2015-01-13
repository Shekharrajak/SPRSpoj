#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
int n;
string s;
vector<int> m;
 
int calc(int i) {
    if (m[i] == -1) {
        if (i == n) {
            m[i] = 1;
        }
		 else if (s[i] == '0') {
            m[i] = 0;
        }
		 else {
            if (i + 1 == n) {
                m[i] = 1;
            }
			 else if (10 * (s[i] - '0') + (s[i + 1] - '0') <= 26) {
                m[i] = calc(i + 1) + calc(i + 2);
            } 
			else {
                m[i] = calc(i + 1);
            }
        }
    }
    //cout<<i<<endl;
    return m[i];//i=0 at the end ..interesting right .
}
 
int main() {
    while (cin >> s && s != "0") {
        n = s.length();
        m = vector<int>(n + 1, -1);
        cout << calc(0) << endl;
    }
}
 



/*
#include <bits/stdc++.h>
using namespace std;
int main(){
int L;
char d[5001];
long long dp[5001];
while(true){
		scanf("%s",d);
		if(d[0]=='0') break;
		
		L = strlen(d);
		dp[0] = dp[1] = 1;
		
		for(int i = 2;i<=L;++i){
			dp[i] = 0;
			
		char c1 = d[i-2]-'0', c2 = d[i-1]-'0';
		if(c1==1 || (c1==2 && c2<=6)) dp[i] += dp[i-2];
		
		if(c2!=0) dp[i] += dp[i-1];
			}
		printf("%lld\n",dp[L]);
	}
return 0;
}
*/

/*
#include<bits/stdc++.h>
long long int len;
long long int dp[5001];// Here dp[i] denotes number of decryption till ind i
char str[5001];
long long int solve(int i)
{
 if(str[i]=='0')
  return 0;
 if(i+1>=len)
  return 1;
 if(dp[i])
  return dp[i];
 long long int ans=0;
 ans+=solve(i+1);
 if(i+1<len && 10*(str[i]-'0')+(str[i+1]-'0')<=26)
  ans+=solve(i+2);
 return dp[i]=ans;
}
int main()
{
 while(1)
 {
  scanf("%s",str);
  if(str[0]=='0')
   break;
  memset(dp,0,5001);
  len=strlen(str);
  printf("%lld\n",solve(0));
 }
 return 0;
}
*/

/*

# include <cstdio>
# include <cstring>
char Input[5001] = "";
unsigned long long DP[5001];
int main()
{
 freopen ("Input.txt", "r", stdin);
 freopen ("Scratch.txt", "w", stdout);
 scanf ("%s", Input);
 while (strcmp(Input, "0"))
 {
  int Len = strlen (Input), Index = 1;
  memset (DP, 0, sizeof DP);
  DP[0] = 1;
  while (Index < Len)
  {
   int temp = 0;
   temp = (Input[Index-1]-'0') * 10;
   temp += (Input[Index] -'0');
   if (Input[Index]-'0') DP[Index] = DP[Index-1];
   if (temp <= 26 && temp > 9) DP[Index] += DP[Index-2 < 0?0:Index-2];
   //printf ("%d\t%llu\n",Index, DP[Index]);
   Index++;
  }
  //printf ("%llu\t%s\n", DP[Len-1], Input);
  printf ("%llu\n", DP[Len-1]);
  scanf ("%s", Input);
 }
}


*/



