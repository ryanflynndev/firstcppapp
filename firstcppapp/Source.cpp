#include <iostream>
using namespace std;

int main() {
	int a(1);
	int b = 13;

	if (a < b) {
		cout << "a is less than b" << endl;
	}
	else if (b < a) {
		cout << "b is less than a" << endl;
	}
	else {
		cout << "a is equal to b" << endl;
	}

	system("pause");

} 