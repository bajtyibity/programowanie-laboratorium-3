#include <iostream>

using namespace std;

int main()
{

	int grupa_studentow, ilosc_pkt, suma = 0, a;
	cout << "z ilu studentow sklada sie grupa laboratoryjna" << endl;
	cin >> grupa_studentow;
	a = grupa_studentow;
	if (grupa_studentow > 0)
	{
		while (grupa_studentow && grupa_studentow > 0)
		{
			cout << "ile punktow zdobyl student" << endl;
			cin >> ilosc_pkt;
			suma += ilosc_pkt;
			grupa_studentow--;
		}
		cout << "srednia wynosi" << (double)suma / a << endl;
	}
	else
		cout << "nie prawidlowa liczba";
}