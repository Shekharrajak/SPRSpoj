#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long int a,b,s;
    while(t--)
    {
              cin>>a>>b>>s;
             long long int n = (s*2)/(a+b);
             long long int d = (b-a)/(n-5);
             long long int f = a-(2*d);
              cout<<n<<endl;
              for(long long int i=0;i<n;i++)
               cout<<f+(i*d)<<" ";
              cout<<endl;
    }    
    
    return 0;
}

