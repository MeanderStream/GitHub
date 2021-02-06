/*
  输入某年某月某日，判断这一天是这一年的第几天？
1.程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊
情况，闰年且输入月份大于3时需考虑多加一天。
*/

#include<iostream>
using namespace std;

int main()
{
	
	int yy;
	int mm;
	int dd;
	int total=0,total_1=0,total_2=0,total_3=0;
	int MM[] = {1,2,3,4,5,6,7,8,9,10,11,12};

	cin >> yy >> mm >> dd;

	if (yy % 400==0 || yy % 100 != 0 && yy % 4 == 0)
	{
		for (int i = 0; i <mm; i++)
		{
			if (i == 1 || i == 3 || i == 5 ||i == 7 || i == 8 || i == 10 || i == 12)
			{
				MM[i] = 31;
				total_1 += MM[i];
			}
			else if (i == 4 || i == 6 || i == 9 || i == 11)
			{
				MM[i] = 30;
				total_2 += MM[i];
			}
			else if (i == 2) 
			{
				MM[i] = 29;
				total_3 += MM[i];
			}
			
		}
		total = total_1 + total_2 + total_3 + dd;

		cout << total;
	}
	else
	{
		for (int i = 0; i < mm; i++)
		{
			if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			{
				MM[i] = 31;
				total_1 += MM[i];
			}
			else if (i == 4 || i == 6 || i == 9 || i == 11)
			{
				MM[i] = 30;
				total_2 += MM[i];
			}
			else if (i == 2)
			{
				MM[i] = 28;
				total_3 += MM[i];
			}

		}
		total = total_1 + total_2 + total_3 + dd;

		cout << total;
	}
	
return 0;
}