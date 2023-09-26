#include <iostream>
using namespace std;
int main()
{
	int x, x2, x4, x8, x9, x11;
	cin >> x;
	x2 = x * x;
	x4 = x2 * x2;
	x8 = x4 * x4;
	x9 = x8 * x;
	x11 = x9 * x2;
	cout << x11;
	return 0;
}