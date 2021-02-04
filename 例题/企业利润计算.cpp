#include<iostream>
using namespace std;

int main()
{
	double reward;
	double I;
	   
	cout << "请输入利润I："<<endl;
	cin >> I;

	if (I>=1000000)
	{
        reward=(I-1000000)*(0.015)+ (I - 600000) * (0.015) + (I - 400000) * (0.03) + (I - 200000) * (0.05) + (I - 100000) * (0.075) + 100000 * 0.1;
	    cout << reward << " 元" << endl;
	}
	else if(I >= 600000)
	{
		reward =(I-600000)*(0.015)+ (I - 400000) * (0.03) + (I - 200000) * (0.05) + (I - 100000) * (0.075) + 100000 * 0.1;
		cout << reward << " 元" << endl;
	}
	else if (I>=400000) 
	{
		reward =(I-400000)*(0.03)+ (I - 200000) * (0.05) + (I - 100000) * (0.075) + 100000 * 0.1;
		cout << reward << " 元" << endl;
	}
	else if(I>=200000)
	{
		reward = (I - 200000) * (0.05) + (I - 100000) * (0.075) + 100000 * 0.1;
		cout << reward << " 元" << endl;
	}
	else if(I>=100000)
	{
		reward = (I - 100000) * (0.075) + 100000 * 0.1;
		cout << reward << " 元" << endl;
	}
	else if(I < 100000 && I>0)
	{	
			reward = I * (0.1);
			cout << reward << " 元" << endl;		
	}
	else
	{
		if (I <= 0) 
		{
			cout << "输入有误，请从新输入！" << endl;
		}
	}
	
return 0;
}