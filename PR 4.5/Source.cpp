// Lab_04_5.cpp
// Обухов Віктор
// Лабораторна робота № 4.5
// «Попадання» у плоску фігуру
// Варіант 7

#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	double x, y, R;

	srand((unsigned)time(NULL));

	cout << "R = "; cin >> R;
	for (int i = 0; i < 10; i++)
	{

		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if (((x + R) * (x + R) + (y - R) * (y - R) <= R * R) || (y <= 0 && y >= -R && x >= 0 && x <= 2 * R))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(6) << "x" << "    |"
		<< setw(7) << "y" << "      |" << endl;
	cout << "---------------------------" << endl;

	for (int i = 0; i < 10; i++)
	{
		x = 2. * R * rand() / RAND_MAX  - 2 * R;
		y = 2. * R * rand() / RAND_MAX  - 2 * R;

		if (((x + R) * (x + R) + (y - R) * (y - R) <= R * R) || (y <= 0 && y >= -R && x >= 0 && x <= 2 * R))

			cout << setw(9) << setprecision(4) << x << "  |"
			<< setw(11) << setprecision(4) << y << "  |  " << "yes" << endl;
		else
			cout << setw(9) << setprecision(4) << x << "  |"
			<< setw(11) << setprecision(4) << y << "  |  " << "no" << endl;
	}
	return 0;
}
