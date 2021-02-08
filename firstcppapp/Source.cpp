#include <iostream>
using namespace std;

void welcome() {
	cout << "Welcome!" << endl;
}

void printNumber(int num) {
	{
		cout << num << endl;
	}
}

int add(int a, int b) {
	int result;
	result = a + b;
	return result;
}

int main() {
	
	welcome();

	printNumber(44);

	int c;
	c = add(1, 4);
	printNumber(c);
	
	system("pause");
}
