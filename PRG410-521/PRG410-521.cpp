// PRG410-521.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double pi = 0;
	long i, n;

	cout << "Enter the value of n" << endl;
	cin >> n;

	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			pi = (pi + (1.0 / (2 * i + 1)));
		}
		else
		{
			pi = (pi - (1.0 / (2 * i + 1)));
		}
	}
	pi = 4 * pi;

	cout << endl << "pi = " << pi << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
