#include<iostream>
using namespace std;
#include<stack>


void flipAdjacent1(int* nums, int rows, int cols, int index)
{
    stack<int> group;
    group.push(index);
    while(!group.empty())
    {
        int topIndex = group.top();
        group.pop();
        nums[topIndex] = 0;

        int row = topIndex / cols;
        int col = topIndex % cols;

        // up
        if(row > 0 && nums[(row - 1) * cols + col] == 1)
            group.push((row - 1) * cols + col);
        // right
        if(col < cols - 1 && nums[row * cols + col + 1] == 1)
            group.push(row * cols + col + 1);
        // down
        if(row < rows - 1 && nums[(row + 1) * cols + col] == 1)
            group.push((row + 1) * cols + col);
        // left
        if(col > 0 && nums[row * cols + col - 1] == 1)
            group.push(row * cols + col - 1);
    }
}

int groupOf1(int* nums, int rows, int cols)
{
    if(nums == NULL || rows <= 0 || cols <= 0)
        return 0;

    int group = 0;
    for(int i = 0; i < rows * cols; ++i)
    {
        if(nums[i] == 1)
        {
            group++;
            flipAdjacent1(nums, rows, cols, i);
        }
    }

    return group;
}

int main(){
	int a[4][5]=	{
					{1,1,0,0,1},
					{1,0,0,1,0},
					{1,1,0,1,0},
					{0,0,1,0,0}
					
				};
	int b[sizeof(a)/sizeof(int)];
	for(int i =0;i<4;i++){
		for(int j=0;j<5;j++){
			b[i]=a[i][j];
		}
		
	}
	cout<<	groupOf1(&b[0], 4, 5)<<endl;
		
		for(int i=0;i<sizeof(b)/sizeof(int);i++){
			{
				cout<<b[i]<<"\t";
			}
			if(i%5==0 && i!= 0 ){
				cout<<endl;
			}
		}
		
		
return 0;	
}




