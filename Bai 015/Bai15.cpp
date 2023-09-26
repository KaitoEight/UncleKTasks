#include <iostream>
using namespace std;
int main()
{
	int x, x2, x4, x16, x8, x32, x64;
	cin >> x;
	x2 = x * x;
	x4 = x2 * x2;
	x8 = x4 * x4;
	x16 = x8 * x8;
	x32 = x16 * x16;
	x64 = x32 * x32;
	cout << x64;
	return 0;
}