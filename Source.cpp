#include <iostream>
using namespace std;
#include <ctime>
void main() {
	srand(time(0));
	float a=rand()%50, b=rand()%60, c=rand()%70;
	cout << "Enter 1 to calc 2 to exit\n";
	int choice;
	cin >> choice;
	if (choice == 1) {
		cout << sqrt(a) << " " << sqrt(b) << " " << sqrt(c) << endl;
	}
	if (choice == 2)
		exit;
}