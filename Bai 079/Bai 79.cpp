#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	float S = 0;
	int t = 1;
	for (int i = 1; i <= n; i++)
	{
		t = t * i;
		S = S + (i * t);
	}
	cout << S;
	return 0;
}