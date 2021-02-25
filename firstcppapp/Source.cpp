#include <iostream>
using namespace std;


int main() 
{
	string myStr = "Druid";
	string& myRef = myStr;

	myRef += " Mechanics";

	cout << myStr << endl;
	cout << myRef << endl;

	
	system("pause");

}

