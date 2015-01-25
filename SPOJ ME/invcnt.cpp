#include <stdio.h>
#include <stdlib.h>
 
long  _mergeSort(long arr[], long temp[], long left, long right);
long merge(long arr[],long temp[],long left,long mid, long right);
 

long mergeSort(long arr[],long array_size)
{
    long *temp = (long *)malloc(sizeof(long)*array_size);
    return _mergeSort(arr, temp, 0, array_size - 1);
}
 

long _mergeSort(long arr[],long temp[],long left,long right)
{
  long mid, inv_count = 0;
  if (right > left)
  {
   
    mid = (right + left)/2;
 
    inv_count  = _mergeSort(arr, temp, left, mid);
    inv_count += _mergeSort(arr, temp, mid+1, right);
 
    /*Merge the two parts*/
    inv_count += merge(arr, temp, left, mid+1, right);
  }
  return inv_count;
}
 

long merge(long arr[],long temp[],long left,long mid,long right)
{
  long i, j, k;
  long inv_count = 0;
 
  i = left; /* i is index for left subarray*/
  j = mid;  /* i is index for right subarray*/
  k = left; /* i is index for resultant merged subarray*/
  while ((i <= mid - 1) && (j <= right))
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];
 
     
      inv_count = inv_count + (mid - i);
    }
  }
 
  while (i <= mid - 1)
    temp[k++] = arr[i++];
  while (j <= right)
    temp[k++] = arr[j++];
 
  for (i=left; i <= right; i++)
    arr[i] = temp[i];
 
  return inv_count;
}
 

int main(int argv, char** args)
{
	long t;
	
  scanf("%ld",&t);
  while(t--){
  	long n;
  	scanf("%ld",&n);
  	long a[n];
  	for(int i=0;i<n;i++){
  		scanf("%ld",&a[i]);
  	}
  	 printf("%ld\n",mergeSort(a, n));
  }
  getchar();
  return 0;
}


