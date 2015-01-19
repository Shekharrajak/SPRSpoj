
#include <stdio.h>

#define i64 long long

bool isnum(char *str, i64 &n, char &op)
{
	n = 0;
	if(str[0]<'0' || str[0]>'9')
	{
		op = str[0];
		return false;
	}
	for(int i=0; str[i]; i++)
		n = n*10 + (str[i]-'0');
	return true;
}

int main()
{
	char token[30], op;
	int n;
	i64 ans, num;
	scanf("%d", &n);
	while(n--)
	{
		ans = 0;
		op = '+';
		while(scanf("%s", token)==1)
		{
			if(isnum(token, num, op))
			{
				switch(op)
				{
				case '+': ans += num; break;
				case '-': ans -= num; break;
				case '*': ans *= num; break;
				case '/': ans /= num; break;
				}
			}
			else if(op == '=')
			{
				printf("%lld\n", ans);
				break;
			}
		}
	}
	return 0;
}



/*
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    signed int n,k,count=0,i;
    scanf("%u %u",&n,&k);
    signed int arr[n];
    for(i=0;i<n;i++)
        scanf("%u",&arr[i]);
    sort(arr,arr+n);
    for(i=0;i<n;i++)
    {
        int flag=0,mid;
        //binary search//
        int lb=0,ub=n-1;
        while(lb<=ub)
        {
            mid=(lb+ub)/2;
            if(arr[mid]==arr[i]+k)
            {
                flag=1;
                break;
            }
            else if(arr[mid]>arr[i]+k)
                ub=mid-1;
            else
                lb=mid+1;
        }
        if(flag==1)
            count+=1;
    }
    printf("%u\n",count);
    return 0;
}


/*
#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  char ch;
  scanf("%*c",&ch);
  string str;
  while(n--)
    {
      getline(cin,str);
      char oper;
      int i=0;
      long long num=0,ans=0;
      for(;i<str.length()&&str.at(i)>='0'&&str.at(i)<='9';i++)
        {
          num*=10;
          num+=(str.at(i)-'0');
        }
      ans=num;

      for(;i<str.length();)
        {

          num=0;
          i++;
          oper=str.at(i);
          if(oper=='=')
            break;
          i+=2;

          for(;str.at(i)>='0'&&str.at(i)<='9';i++)
            {
              num*=10;
              num+=(str.at(i)-'0');
            }

          switch(oper)
            {
            case '+' : ans=ans+num;
              break;
            case '*': ans=ans*num;
              break;
            case '-': ans=ans-num;
              break;
            case '/' : ans=ans/num;
              break;
            }

        }
      cout<<ans<<endl;
    }
}
*/
