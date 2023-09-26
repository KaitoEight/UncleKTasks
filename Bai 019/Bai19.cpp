#include <iostream>
using namespace std;
int main()
{
	int x, x2, x4, x8, x5, x13;
	cin >> x;
	x2 = x * x;
	x4 = x2 * x2;
	x8 = x4 * x4;
	x5 = x4 * x;
	x13 = x8 * x5;
	cout << x13;
	return 0;
}