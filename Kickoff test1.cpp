#include<iostream>
using namespace std;

int main()
{
	int i, s = 0, x;

	for (i = 0; i < 10; i++)
	{
		cout << "Tapez un entier : "; cin >> x;
		s = s + x;
	}

	cout << "La somme vaut : " << s << endl;

	return 0;

	cout << "Appuyez sur une touche pour continuer ..." << endl;
	cin.ignore();
	cin.get();
	return EXIT_SUCCESS;
}