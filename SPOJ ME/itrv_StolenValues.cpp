#include <iostream>
#include<vector>
#include<cstdio>
using namespace std;

int maxValue(int n){
	int value1;
	int value2;int temp;
	if(n==0){
	return 0;
	}
	
	else if(n==1){
		scanf("%d",&value1);
		printf("%d",value1);
	}
	
	else if(n==2){
		scanf("%d",&value1);
		scanf("%d",&value2);
		printf("%d", (value1 > value2 ? value1 : value2));
	}
	
	else {

		scanf("%d",&value1);
		scanf("%d",&value2);
		temp =  (value1 > value2 ? value1 : value2);
		int new1;
	for(int i =2 ;i<n;i++){
		scanf("%d",&new1);
		int t=temp > (value1 +new1 ) ? temp :( value1 + new1) ;
		value1=temp;
		temp =t;
		}
	}
	printf("%d",temp);
	
}
int main()
	
{

int n;
scanf("%d",&n);
maxValue(n);
return 0;
}


/*
int maxStolenValue(const vector<int>& values)
{
    int length = values.size();
    if(length == 0)
        return 0;

    int value1 = values[0];
    if(length == 1)
        return value1;

    int value2 = max<int>(values[0], values[1]);
    if(length == 2)
        return value2;

    int value;
    for(int i = 2; i < length; ++i)
    {
        value = max<int>(value2, value1 + values[i]);
        value1 = value2;
        value2 = value;
    }

    return value;
}
int main(int argc, char** argv) {
	cout<<"Enter the home values : "<<endl;
	vector<int> values(20);

	int a;
	cin>>a;
	values[0]=a;
	for(int i=1;values[i-1]!=-1;i++){
		cin>>values[i];
	}
	cout<<maxStolenValue(values);
	return 0;
}
*/
