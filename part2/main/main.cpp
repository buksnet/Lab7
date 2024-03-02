#include <iostream>
#include <math.h>
using namespace std;

double len(double x1, double y1, double x2, double y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

bool belong(double x, double y, double x1, double y1, double x2, double y2, double x3, double y3)
{
	double t1, t2, t3;
	t1 = (x1 - x) * (y2 - y1) - (x2 - x1) * (y1 - y);
	t2 = (x2 - x) * (y3 - y2) - (x3 - x2) * (y2 - y);
	t3 = (x3 - x) * (y1 - y3) - (x1 - x3) * (y3 - y);
	if (t1 < 0 && t2 < 0 && t3 < 0)
		return true;
	return false;
}

bool multiangle_belong(int k, double x, double y, ...)
{
	double *p = &y;
	double x1, x2, y1, y2;
	x1 = *(++p);
	y1 = *(++p);
	x2 = *(++p);
	y2 = *(++p);
	for (int i = 2; i < k; i++) {
		if (((x1 - x) * (y2 - y1) - (x2 - x1) * (y1 - y)) >= 0)
			return false;
		x1 = x2;
		y1 = y2;
		x2 = *(++p);
		y2 = *(++p);
	}

	return true;
}
int main()
{
	cout << "length of a line: " << len(5, 6, 3, 5) << endl;
	cout << "Point belongs to a triangle (1=true): " << belong(5, 6, 3, 5, 6, 8, 9, 3) << endl;
	cout << "Point belongs to a figurine (1=true): " << multiangle_belong(3, 5, 6, 3, 5, 6, 8, 9, 3);
	return 0;
}