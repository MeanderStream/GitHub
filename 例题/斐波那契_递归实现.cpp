//斐波那契数列实现
//太费资源，计算量大(递归)

#include<iostream>
using namespace std;

int Fib(int n)
{
	
	if (n<=2)
	{
		return 1;
	}
	else 
	{
		return Fib(n - 1)+ Fib(n - 2);
	}

}



int main() 
{
	int n;
	cin >> n;

	int ret = Fib(n);

	cout << "ret = "<<ret;
return 0；
}

