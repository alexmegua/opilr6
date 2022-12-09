#include <iostream>
#include "math.h"
using namespace std;
int main()
{
	int x, a, b, h;
	double f;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter h: ";
	cin >> h;
	if (x < 0 && b != 0)
	{
		f = a * pow(x, 2) + b;
	}
	else 
		if (x > 0 && b == 0) f = (x - a) / (x - h);
		else if (h != 0) f = x / h;
	else cout << "Error";
	cout << f;
}
