#include <iostream> 
using namespace std;

int main()
{
	int a, b;

	cout << "podaj a: ";
	cin >> a;
	cout << "podaj b: ";
	cin >> b;

	if (a > b) cout << "a jest wieksze";
	else if (a < b) cout << "b jest wieksze";
	else cout << "a i b s¹ równe";
}