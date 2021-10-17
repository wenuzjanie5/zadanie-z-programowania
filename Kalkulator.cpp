#include<iostream>
using namespace std;

int main() {
	char wybor;
	int a;
	int b;

	cout << "wybierz dzia³anie (+, -, :, *) i podaj dwie liczby\n";
    cin >> wybor>>a>>b;

	switch (wybor) {
		case '+':
			cout << a + b;
			break;
		case '-':
			cout << a - b;
			break;
		case ':':
			if (b == 0) break;
			else {
				cout << a / b;
				break;
			}
		case '*':
			cout << a * b;
			break;
	}
}