#include <iostream>
using namespace std;
int main()
{
	int x, x2, x4, x8, x16, x15;
	cin >> x;
	x2 = x * x;
	x4 = x2 * x2;
	x8 = x4 * x4;
	x16 = x8 * x8;
	x15 = x16 * x;
	cout << x15;
	return 0;
}