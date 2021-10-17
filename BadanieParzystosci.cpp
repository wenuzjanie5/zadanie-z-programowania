#include <iostream> 
using namespace std;

int main()
{
	int number;

	cout << "podaj liczbê: ";
	cin >> number;

	if (number % 2 == 0) cout << "liczba jest parzysta"; else cout << "liczba nie jest parzysta";
}