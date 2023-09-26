#include <iostream>
using namespace std;
int main()
{
	int x, x2, x4, x8, x12;
	cin >> x;
	x2 = x * x;
	x4 = x2 * x2;
	x8 = x4 * x4;
	x12 = x8 * x4;
	cout << x12;
	return 0;
}