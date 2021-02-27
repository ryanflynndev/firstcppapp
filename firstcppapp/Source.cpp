#include <iostream>
using namespace std;

void Print(string str);
void Print(int i);

int main() 
{
	Print(3);
	Print("Hi");
	
	system("pause");

}

void Print(string str)
{
	cout << str << endl;
}

void Print(int i) 
{
	cout << i << endl;
}