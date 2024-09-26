//hw5-12.cpp - displays the total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double item1Price = 0.0;
	double item2Price = 0.0;
	double total = 0.0;

	cout << "Item 1's price: ";
	cin >> item1Price;
	cout << "Item 2's price: ";
	cin >> item2Price;

	if (item1Price < item2Price)
		total = item1Price / 2 + item2Price;
	else
		total = item2Price / 2 + item1Price;
	//end if
	cout << fixed << setprecision(2);
	cout << "Total: $" << total << endl;
	return 0;
}	//end of main function