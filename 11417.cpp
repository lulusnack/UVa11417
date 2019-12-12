#include <iostream>
using namespace std;
int GCD(int divisor, int dividend); // 找出最大公因數。
// 練習遞迴
int main()
{
	int input = 0;
	int G = 0;
	while (cin >> input && input != 0) // 輸入0作為結束。
	{
		for (int i = 1; i < input; i++) // 根據題目操作。
		{
			for (int j = i + 1; j <= input; j++)
			{
				G += GCD(i, j);
			}
		}
		cout << G << endl;
		G = 0;
	}
	return 0;
} // 結束

int GCD(int divisor, int dividend) // 使用輾轉相除法。
{
	if (dividend == 0)
	{
		return divisor;
	}
	return GCD(dividend, divisor % dividend);
}