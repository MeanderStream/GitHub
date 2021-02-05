#include<iostream>
using namespace std;

int binary_search(int arr[],int k,int end) 
{
	int left = 0;
	int right = end - 1;
	
	
	while (left<=right)
	{
		int mid = (right + left) / 2;//中间元素
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid-1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}


int main() 
{
//二分查找
	//在一个有序的数组中查找具体的某个数；
	//如果找到了，返回该属的下标，否则返回-1.
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	int end = sizeof(arr) / sizeof(arr[0]) ;

	int ret = binary_search(arr,k,end);//传递过去的是arr ，首元素的地址
	 
	if (ret==-1)
	{
		cout<<"找不到指定数字";
	}
	else 
	{
		cout<<"找到了，下标是: "<<ret<<endl;
	}
  return  0;
}
