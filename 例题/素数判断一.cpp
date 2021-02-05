#include<iostream>
using namespace std;
//判断素数 是素数返回1，否则返回0

int is_prime(int n) 

	int j=0;

	for (int m = 2; m <= n; m++)
	{
		if (n % m == 0)
			j++;
	}
	if (j==1)
	{
		return 1;
	}
	return 0;
}



int main() 
{
	for (int i = 2; i <= 200; i++)
	{
		if (is_prime(i) == 1)
			cout<<i<<" ";
	}
 return 0;
}


