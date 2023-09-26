#include <iostream>
using namespace std;
int main()
{
	int x, x2, x4, x8, x9;
	cin >> x;
	x2 = x * x;
	x4 = x2 * x2;
	x8 = x4 * x4;
	x9 = x8 * x;
	cout << x9;
	return 0;
}