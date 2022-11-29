#include <iostream>
#include "math.h"
using namespace std;
int main()
{
	int x, a, b, c;
	double f;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;
	if (x < 0 && b != 0)
	{
		f = a * pow(x, 2) + b;
	}
	else 
		if (x > 0 && b == 0) f = (x - a) / (x - c);
		else if (c != 0) f = x / c;
	else cout << "Error";
	cout << f;
}
