// Lab_04_4.cpp
// < Назаркевич, Андрій>
// Лабораторна робота № 4.4
// Розгалуження, задане графіком функції.
// Варіант 17
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double x, R, y, xp, xk, dx;
	do {
		cout << "R should be more than zero\nR = "; cin >> R;
	} while (R <= 0);
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "F" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;

	while (x < xk)
	{
		if (x <= -1 - R)
			y = 1;
		else
			if (-1 - R < x && x <= -1)
				y = -sqrt(pow(R, 2) - pow(x + 1, 2));
			else
				if (-1 < x && x <= 2)
					y = -R;
				else
					y = (R * (x - 4)) / 2;
		cout << endl;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	cin.get();
	return 0;
}