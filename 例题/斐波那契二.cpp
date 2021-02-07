//斐波那契数列(for循环)
#include<iostream>
using namespace std;

int Fib(int n) 
{
	 int temp = 1;
	 int now  = 1;
	 int fib  = 0;

	 if (n<=2 && n>0)
	 {
	               return 1;
	 }
	 else 
	 {
		 for (int i = 3; i <= n; i++)
		 {
			 fib = now + temp;
			 now = temp;
			 temp = fib;
		 }
		 return fib;
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
