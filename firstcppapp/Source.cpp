#include <iostream>
using namespace std;

void welcome();
char getYesOrNo();
void printResponse(char response);

void askYesOrNo();

int main() {
	
	askYesOrNo();

	system("pause");
}

void welcome() {
	cout << "Welcome!" << endl;
}

char getYesOrNo() {

	cout << "Enter Yes or No y/n" << endl; 
	
	char response; 
	cin >> response;

	return response;

}

void printResponse(char response) {

	cout << "Your answer was: " << response << endl;
}

void askYesOrNo() {
	welcome();

	char answer = getYesOrNo();
	printResponse(answer);
}