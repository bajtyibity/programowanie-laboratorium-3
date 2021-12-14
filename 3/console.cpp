#include <iostream>

using namespace std;


int main()
{
	int liczba, ile_u = 0, ile_d = 0, suma_d = 0, suma_u = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << "podaj liczbe: ", cin >> liczba;
		if (liczba >= 0)
		{
			ile_d++;
			suma_d += liczba;
		}
		else
		{
			ile_u++;
			suma_u += liczba;

		}

	}

	cout << "dodatnich: " << ile_d << endl;
	cout << "suma dodatnich: " << suma_d << endl;
	cout << "ujemnych: " << ile_u << endl;
	cout << "suma dodatnich: " << suma_u << endl;

}