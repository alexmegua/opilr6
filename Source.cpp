#include <iostream>
#include "math.h"
using namespace std;
int main()
{
	int x, a, b, c, d;
	double f;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;
	cout << "Enter d: ";
	cin >> d;
	if (x < 0 && b != 0)
	{
		f = a * pow(x, 2) + b * d;
		cout << f;
	}
	else
		cout << "Error";
}
