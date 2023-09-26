#include <iostream>	
#include <cmath>
using namespace std;
int main()
{
	float x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	float d = sqrt(pow(x2 - x1, 2)) + sqrt(pow(y2 - y1, 2));
	cout << d;
	return 0;
}