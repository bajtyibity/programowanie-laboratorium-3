#include <iostream>

using namespace std;

int main()
{
	int ilosc_pkt,suma = 0, grupa_studentow=0;
	cout<<"grupa laboratoryjna sklada sie z nieskaczonej liczby studentow"<< endl;

	do {
		cout << "ile punktow zdobyl student" << endl;
		cin >> ilosc_pkt;
		if (ilosc_pkt >= 0 && ilosc_pkt <= 100)
		{
			suma += ilosc_pkt;
			grupa_studentow++;
		}
		else
			continue;

	} while (true);

	if (grupa_studentow != 0)
		cout << "srednia wynosi: " << suma / grupa_studentow << endl;
	else
		cout << "nie dzielimy przez 0" << endl;
}