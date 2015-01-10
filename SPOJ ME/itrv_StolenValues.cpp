#include <iostream>
#include<vector>
using namespace std;

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
