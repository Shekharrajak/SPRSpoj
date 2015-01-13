#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
int n;
string s;
vector<int> m;
 
 
int main() {
    while (cin >> s && s != "0") {
        n = s.length();
       // m = vector<int>(n + 1, -1);
        //cout << calc(0) << endl;
        for(int i=0;i<5;i++)
        	cout<<(s[i]*12)<<endl;
        
		for(int i=0;i<5;i++)
        	cout<<((s[i] - '0')*12)<<endl;
        	
    }
}
 
