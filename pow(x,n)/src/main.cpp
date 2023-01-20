#include <iostream>
using namespace std;
// class Solution
// {
// 	double answer = 1;

// public:
// 	double myPow(double x, int n)
// 	{

// 		if (n == 0 || x == 1)
// 		{
// 			return 1;
// 		}
// 		else if (n < 0)
// 		{
// 			for (int i = n; i < 0; i++)
// 			{
// 				answer *= x;
// 			}
// 			return 1 / answer;
// 		}
// 		else
// 		{
// 			for (int i = 0; i < n; i++)
// 			{
// 				answer *= x;
// 			}
// 			return answer;
// 		}
// 	}
// };
// Time limit exception hatası giderme
class Solution
{
public:
	double myPow(double x, int n)
	{
		if (n == 0 || x == 1)
		{
			return 1;
		}
		if (n < 1)
		{
			x = 1 / x;
			n = abs(n);
		}
		if (n % 2 == 0)
		{
			return myPow(x * x, n / 2);
		}
		else
		{
			return myPow(x * x, n / 2) * x;
		}
	}
};
int main(int argc, char const *argv[])
{
	Solution s;
	double x = s.myPow(2, 10);
	cout << x;
	return 0;
}
