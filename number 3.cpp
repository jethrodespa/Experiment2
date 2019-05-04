#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <cmath>

using namespace std;

const double z = 2.5;

int main()
{
	int x, y;
	double v;
	cout << "Input two integers: ";
	cin >> x >> y;
	switch(x)
	{
		case(1):
		{
			if(1 < y && y < 5)
			{
				v = x*y*z;
				cout << setw(10) << setprecision(2) << fixed << v;
			}
			else if(y >= 5)
			{
				v = x + (y/z);
				cout << setw(10) << setprecision(2) << fixed << v;
			}
			else
			{
				v = x+y+z;
				cout << setw(10) << setprecision(2) << fixed << v;
			}
			break;
		}
		case(2):
		{
			if(y <= 5)
			{
				v = abs((x-y)/z);
				cout << setw(10) << setprecision(2) << fixed << v;
			}
			else if(y > 5)
			{
				v = x-sqrt(y+z);
				cout << setw(10) << setprecision(2) << fixed << v;
			}
			else
			{
				v = x+y+z;
				cout << setw(10) << setprecision(2) << fixed << v;
			}
			break;
		}
		default:
		{
			v = x+y+z;
			cout << setw(10) << setprecision(2) << fixed << v;
			break;
		}
			
	}
}
