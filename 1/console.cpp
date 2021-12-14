#include <iostream>

using namespace std;


int main()
{
	int liczba;
	cout <<"podaj liczbe:";
	cin >> liczba;


	cout << "for" << endl;
	for (int i = 0; i < liczba; i++)
		cout << i << " ";

	cout << endl;

	int i = 0;
	cout << "while" << endl;
	while (i < liczba)
	{
		cout << i << " ";
		i++;
	}
	cout << endl;

	i = 0;
	cout << "do while" << endl;
	do
	{
		cout << i << " ";
		i++;
	} while (i < liczba);

	cout << endl;
}