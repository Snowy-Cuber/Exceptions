// Tamera Fischer
// CIS 1202
// 9/17/2025

#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

char character(char, int);

class invalidCharacterExcpeption {};
class invalidRangeExcpeption {};

int main() {

	try {

		cout << character('A', 31);

	}
	catch (invalidCharacterExcpeption) {
		cout << "Sorry that is an invaild character.";
	}
	catch (invalidRangeExcpeption){
		cout << "Sorry that is an invaild range.";
	}



	cout << endl << endl;
	system("pause");
	return 0;
}


char character(char start, int offset) {

	char newCharacter = start;

	if (!isalpha(start)) {
		throw invalidCharacterExcpeption();
	}
	newCharacter += offset;

	if (!isalpha(newCharacter)) {
		throw invalidRangeExcpeption();
	}

	if ((isupper(start) && islower(newCharacter)) || (islower(start) && isupper(newCharacter))) {
		throw invalidRangeExcpeption();
	}

	return newCharacter;

}