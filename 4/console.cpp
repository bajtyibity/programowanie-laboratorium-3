#include <iostream>

using namespace std;


int main()
{
	int liczba, ile = 0, suma = 0, n;
	cout << "ile liczb pobrac: ", cin >> n;
	cout << endl;

	if (n > 0)
		for (int i = 0; i < n; i++)
		{
			cout << "podaj liczbe: ", cin >> liczba;
			if (liczba % 2 == 0)
			{
				ile++;
				suma += liczba;
			}

		}
	else
	{
		cout << "n nie moze byc ujemne";
	}

	cout << endl;
	cout << "parzystych: " << ile << endl;
	cout << "suma parzystych liczb: " << suma << endl;


}