#include <iostream>
using namespace std;

struct Player
{
	int Level;
	float Health;
	float Damage;
	float Stamina;

	void TakeDamage(float dmg) {
		Health -= dmg;
	}

	int GetLevel()
	{
		if (Level > 10) {
			cout << "Level is over 10! \n";
		}
		return Level;
	}
};



int main() 
{
	Player ryan = { 11, 100.f, 10.f, 50.f };


	cout << "Ryan's Level = " << ryan.GetLevel() << endl;
	
	system("pause");

}

