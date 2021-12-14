#include <iostream>

using namespace std;

int main()
{

	int grupa_studentow, ilosc_pkt, suma = 0,a=0;
	cout << "z ilu studentow sklada sie grupa laboratoryjna" << endl;
	cin >> grupa_studentow;
	a = grupa_studentow;
	if (grupa_studentow != 0 && grupa_studentow>0)
	{
		while (grupa_studentow)
		{
			cout << "ile punktow zdobyl student" << endl;
			cin >> ilosc_pkt;
			if (ilosc_pkt >= 0 && ilosc_pkt <= 100)
				suma += ilosc_pkt;
			else
				cout << "niepoprawna wartosc";

			grupa_studentow--;
		}
		cout << "srednia wynosi " << (double)suma / a << endl;
	}
	else
		cout << "klasa nie ma studentow" << endl;
}