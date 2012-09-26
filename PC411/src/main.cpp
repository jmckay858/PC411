//============================================================================
// PC 4.11 - Book Club Points
// -------------------------
// Programmer: Jeremy F McKay
// Date: September 24, 2012
// -------------------------
// This program will determine how many book club points are awarded based on
// customer purchases.
//
// Note how the code does not go off to infinity, but about 70 characters.
// For example:
//
// ---------1---------2---------3---------4---------5---------6---------7
// 1234567890123456789012345678901234567890123456789012345678901234567890



#include <iostream>
using namespace std;

int main() {

	int num_books, points;

	cout 	<< "\n   " << "Book Club Points\n"
			<< "   " << "---------------------\n\n";

	cout 	<< "   "
			<< "How many books has the customer purchased this month? ";

	cin >> num_books;

	if (num_books < 0)

		cout << "\n   "
			 << "You cannot enter a negative number please rerun the program"
			 << " and enter a valid number.\n";

		else
		{
		switch (num_books)
		{
			case (0):
					points = 0;
					break;
			case (1):
					points = 1;
					break;
			case (2):
					points = 2;
					break;
			case (3):
					points = 3;
					break;
			default:
					points = 4;
					break;
		}

	cout << "\n   "
		 << "This customer earned " << points
		 << " points this month.\n";
		}
	return 0;
}
