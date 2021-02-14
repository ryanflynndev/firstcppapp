#include <iostream>
using namespace std;

enum SubmitButtonStatus {
	SB_Not_Clicked,
	SB_Clicked
};

int main() {

	SubmitButtonStatus button_status;
	button_status = SB_Clicked;
	
	if(button_status == SB_Clicked){
		cout << "Submit button has been clicked!" << endl;
	}
	else if (button_status == SB_Not_Clicked) {
		cout << "Submit button has not been clicked yet" << endl;
	}
	
	system("pause");

}

