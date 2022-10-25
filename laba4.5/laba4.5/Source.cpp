#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x; 
	double y; 
	double R;
	double b;
	double a;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;
		cout << "b = "; cin >> b;
		cout << "a = "; cin >> a;
		if ((pow(x, 2) + pow(y, 2) >= pow(R, 2) && y <= b && x <= a && y >= x) ||
			(pow(x, 2) + pow(y, 2) <= pow(R, 2) && y <= x && y >= -b && x <= 0))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

		for (int i = 0; i < 10; i++)
		{
			x = 6. * rand() / RAND_MAX - (a,b,R);
			y = 6. * rand() / RAND_MAX - (a,b,R);
			if ((pow(x, 2) + pow(y, 2) >= pow(R, 2) && y <= b && x <= a && y >= x) ||
				(pow(x, 2) + pow(y, 2) <= pow(R, 2) && y <= x && y >= -b && x <= 0))
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}
