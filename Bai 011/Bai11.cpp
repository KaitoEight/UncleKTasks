#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	float a, b, c, x1, x2, x3, y1, y2, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	float p = (a + b + c)/2;
	float s = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << s;
	return 0;
}