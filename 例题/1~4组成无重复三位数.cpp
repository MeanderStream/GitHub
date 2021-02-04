#include<iostream>
using namespace std;

int main()
{	
	int H=1;//百
	int T=1;//十位
	int S=1;//个位
	int HTS=1;//三位数

	
	for (int H = 1; H <= 4; H++)
	{
		for (int T = 1; T <= 4; T++)
		{
			for (int S = 1; S <= 4; S++)
			{
				
				if (H != T && T !=S && H!=S)
				{
					HTS = H * 100 + T*10 + S;
					cout << HTS << " ";
				}
				
			}
		
	              }
	}
return 0;
}