// Tamera Fischer
// CIS 1202
// 9/17/2025

#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

char character(char, int);

int main() {

	try {

		cout << character('a', 1);

	}
	catch () {

	}
	catch (){

	}



	cout << endl << endl;
	system("pause");
	return 0;
}


char character(char start, int offset) {

	char newCharacter = start;

	if (!isalpha(start)) {
		throw;
	}

	if (offset < 1 || offset >= 32) {
		throw;
	}

	newCharacter += offset;

	if (!isalpha(newCharacter)) {
		throw;
	}

	return newCharacter;

}