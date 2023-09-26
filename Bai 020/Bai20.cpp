#include <iostream>
using namespace std;
int main()
{
	int x, x2, x4, x8, x6, x14;
	cin >> x;
	x2 = x * x;
	x4 = x2 * x2;
	x8 = x4 * x4;
	x6 = x4 * x2;
	x14 = x8 * x6;
	cout << x14;
	return 0;
}